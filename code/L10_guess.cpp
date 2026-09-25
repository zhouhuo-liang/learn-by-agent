#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<ctime>
using namespace std;
vector<int> rec;
int random_number() {
	return rand() % 100 + 1;
}
void play() {
	int target = random_number();
	rec.push_back(target);
	cout << "���Ѿ������һ���������°ɣ�" << endl;
	int guess, count = 0;
	while (true) {
		cout << "��£�";
		cin >> guess;
		count++;
		if (guess > target) {
			cout << "����" << endl;
		}
		else if (guess < target) {
			cout << "С��" << endl;
		}
		else {
			cout << "��ϲ��¶��ˣ����ǣ�" << target << "������: " << count << "�Ρ�" << endl;
			break;
		}
	}
}
int main() {
	srand((unsigned int)(time(0)));
	int numberOfgames = 0;
	while (true) {
		if (numberOfgames == 0) {
			cout << "��ʼ��Ϸ��yes/no��" << endl;
		}
		else {
			cout << "������Ϸ��yes/no��" << endl;
		}
		string button;
		cin >> button;
		if (button == "yes") {
			play();
			numberOfgames++;
		}
		else {
			cout << "��ļ�¼��";
			for (int x : rec) {
				cout << x << " ";
			}
			break;
		}
	}
	return 0;
}