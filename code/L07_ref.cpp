#include<iostream>
using namespace std;
void add_one_ref(int& r) {
	r = r + 1;
}
int sum(const int& a, const int& b) {
	return a + b;
}
int main () {
	int x = 20;
	int& ref = x;
	cout << "x = " << x << endl;
	ref = 99 ;
	cout << " (ͨ�������ĵ�)x =" << x << endl ;
	add_one_ref(x);
	cout << " x+1 = " << x << endl;
	const int n = 5;
	//n = 6;
	cout << "sum(10,20)= " << sum(10, 20) << endl;
	return 0;
}