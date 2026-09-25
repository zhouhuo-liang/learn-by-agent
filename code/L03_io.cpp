#include<iostream>
using namespace std;
int is_large(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << ">" << b << endl;
	}
	else if (a < b) {
		cout << a << "<" << b << endl;
	}
	else {
		cout << a << "==" << b << endl;
	}
	cout << "�� " << a << " ���� " << b << ":" << endl;
	int large_num = is_large(a, b);
	int little_num = (large_num == a) ? b : a ;
	for (int i = little_num; i <= large_num; i++) {
		cout << i << " ";
	}
	cout << endl;
	int j = b;
	while (j >= a) {
		cout << j <<" ";
		j--;
	}
	cout << endl;
	return 0;
}