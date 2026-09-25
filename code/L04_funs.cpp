#include<iostream>
using namespace std;
int add(int a, int b) {
	return a + b;
}
int max_of(int a, int b) {
	return a > b ? a : b;
}
void print_sep() {
	cout << "-------------------"<<endl;
}
int square(int n) {
	return n * n;
}
int main() {
	int x, y;
	cout << "������������"<<endl;
	cin >> x >> y;
	cout << x << "+" << y << "==" << add(x, y) << endl;
	print_sep();
	cout << "�ϴ�����ǣ�" << max_of(x, y) << endl;
	print_sep();
	cout << "����һ��100+23��" << add(100, 23)<<endl;
	print_sep();
	for (int i = 1; i <= 5; i++) {
		cout << square(i)<< endl;
	}
	return 0;
}