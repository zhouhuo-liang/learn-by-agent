#include<iostream>
using namespace std;
int main() {
	int      age   = 20;
	unsigned score = 99;
	char     grade = 'A';
	bool     pass  = true;
	float    pi = 3.1415f;
	double   e = 2.71828;
	
	cout << "age    sizeof int      = " << sizeof(age)      << endl;
	cout << "score  sizeof unsigned = " << sizeof(score) << endl;
	cout << "grade  sizeof char     = " << sizeof(grade)     << endl;
	cout << "pass   sizeof bool     = " << sizeof(pass)     << endl;
	cout << "pi     sizeof float    = " << sizeof(pi)    << endl;
	cout << "e      sizeof double   = " << sizeof(e)   << endl;
	//age��ʮ�����Ƶ���
	cout << "age ��ʮ�����Ƶ���" << hex << age << dec << endl;
	char c = 300;
	cout << "char c =300? ʵ����" << (int)c << endl;
	return 0;
}