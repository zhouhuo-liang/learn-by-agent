#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<int> nums;
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(30);
	cout << "size = " << nums.size()<<endl;
	cout << "nums[1] = " << nums[1]<<endl;
	for (int i = 0; i <= 5; i++) {
		nums.push_back(i * 10);
	}
	cout << "nums����Ԫ�أ�";
	for (int v : nums)
		cout << v << " ";
	cout << endl;
	string s1 = "Hello"; string s2 = " world";
	string s = s1 + s2;
	cout << "s = " << s << " , ���� = " << s.size() << endl;
	cout << "s.substr(0,5) = " << s.substr(0, 5) << endl;
	string line;
	cout << "������һ�У�";
	getline(cin, line);
	cout << "��������� = " << line << endl;

	vector<int> v;
	int n;
	cout << "�������������-1ֹͣ��" << endl;
	while (cin >> n && n != -1) {
		v.push_back(n);
	}
	cout << "�������ˣ�";
	int sum = 0;
	for (int x : v) {
		cout << x << " ";
		sum += x;
	}
	cout << endl << "�ܺ� = " << sum << endl;
	return 0;
}