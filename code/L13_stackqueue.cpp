#include<iostream>
using namespace std;
struct Stack {
	char data[100];
	int top = -1;
	void push(char v) {
		if (top >= 99) { cout << "ջ���ˣ�" << endl; }
		else {
			data[++top] = v;
		}
	}

	char pop() {
		if (top < 0) { cout << "ջ�յģ�" << endl; return -1; }
		return data[top--];
	}
	bool empty() { return top < 0; }
};

struct Queue {
	int data[100];
	int head=0;
	int tail=0;
	void enqueue(int v) {
		if (tail >= 100) { cout << "�������ˣ�" << endl; }
		else {
			data[tail++] = v;
		}
	}
	int dequeue() {
		if (head >= tail) { cout << "���пյģ�" << endl;  return -1; }
		return data[head++];
	}
	bool empty() {
		return head >= tail;
	}
};

bool isMatch_l(char c) {
	if (c == '(') {
		return 1;
	}
	else {
		return 0;
	}
}

bool isMatch_r(char c) {
	if (c == ')') {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	Stack s;
	s.push('a'); s.push('b'); s.push('c');
	cout << "���ջ˳��";
	while (!s.empty()) {
		cout << s.pop() << ' ';
	}
	cout << endl;

	Queue q;
	q.enqueue(10); q.enqueue(20); q.enqueue(30);
	cout << "�������˳��";
	while (!q.empty()) {
		cout << q.dequeue() << ' ';
	}
	cout << endl;

	Stack c;
	char c_test1[7] = {'(','(',')','d','(',')','g'};
	for (int i = 0; i < 7; i++) {
		
		if (isMatch_l(c_test1[i])) { c.push(c_test1[i]); }
		else if(isMatch_r(c_test1[i])) { char cn = c.pop(); }
	}
	if(c.empty()) {
		cout << "ƥ��";
	}
else { cout << "��ƥ��"; }
	return 0;
}