#include<iostream>
#include<string>
using namespace std;
int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << "�ܺ�Ϊ��" << sum << endl;
	cout << "ƽ��Ϊ��" << (double)sum / 5 << endl;
	int Max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > Max) {
			Max = arr[i];
		}
	}
	cout << "�������ǣ�" << Max << endl;
	for (int i = 0; i < 5; i++) {
		cout << "arr[" << i << "] �ĵ�ַ=" << &arr[i] << endl;
	}
	string name;
	cout << "������֣�"<<endl;
	cin >> name;
	cout << "���" << name << "! ���ֳ���Ϊ��" << name.size() << endl;

	return 0;
}