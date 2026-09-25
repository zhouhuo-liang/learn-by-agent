#include<iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	double score;
	int id;
};
void show(const Student& s) {
	cout << "name = " << s.name << endl;
	cout << "age = " << s.age << endl;
	cout << "score = " << s.score << endl;
	cout << "id = " << s.id << endl;
}
Student make_student(string n, int a, double sc,int i_d) {
	Student s;
	s.name = n;
	s.age = a;
	s.score = sc;
	s.id=i_d;
	return s;
}
int main() {
	Student a = { "����",20,95.5,1651 };
	Student b = make_student("����", 21, 85.6,6545);
	show(a);
	show(b);
	Student class1[3]{
		{"����", 21, 90, 6113},
		{ "����", 22, 76.5, 6461},
		{ "Ǯ��", 20, 85.5, 6651 }
	};
	double total = 0;
	for (int i = 0; i < 3; i++) {
		show(class1[i]);
		total += class1[i].score;
	}
	cout << "����ƽ����= " << total / 3 << endl;

	return 0;
}