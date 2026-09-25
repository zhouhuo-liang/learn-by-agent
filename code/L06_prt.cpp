#include<iostream>
using namespace std;
void add_one(int* p) {
	*p = *p + 1;
}
int main() {
	int x = 20;
	int y = 20;
	cout << "x =" << x << ", ��ַ = " << &x << endl;
	cout << "y =" << y << ", ��ַ = " << &y << endl;
	int* p = &x;
	cout << "p(��ַ) =" << p << "*p(ȡֵ)= " << *p << endl;
	*p = 99;
	cout << "x���ĳɣ�" << x << " ͨ��*p�ĵġ�" << endl;
	add_one(&y);
	cout << "y+1 =" << y << endl;
	int arr[3] = { 10,20,30 };
	int* q = arr;
	cout << "*q = " << *q << endl;
	cout << "*(q+1) = " << *(q + 1) << endl;
	cout << "*(q+2) = " << *(q + 2) << endl;
	return 0;
}