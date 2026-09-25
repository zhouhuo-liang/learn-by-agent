#include<iostream>
using namespace std;

struct Node {
	int value;
	Node* next;
};

Node* make_node(int v) {
	Node* n = new Node;
	n->value = v;
	n->next = nullptr;
	return n;
}

void print_node(Node* head) {
	Node* p = head;
	while (p != nullptr) {
		cout << p->value << " -> ";
		p = p->next;
	}
	cout << "null"<<endl;
}

void push_back(Node*& head, int v) {
	Node* newNode = make_node(v);
	if (head == nullptr) { head = newNode; }
	else {
		Node* p = head;
		while (p->next != nullptr) {
			p = p->next;
		}
		p->next = newNode;
	}
}

int list_length(Node* head) {
	int len = 0;
	Node* p = head;
	if (p == nullptr) { return len; }
	else {
		len += 1;
		while (p->next != nullptr) {
			len++;
			p = p->next;
		}
		return len;
	}
}
int main() {
	Node* head = make_node(10);
	head->next = make_node(20);
	head->next->next = make_node(30);
	print_node(head);
	Node* newNode = make_node(5);
	newNode->next = head;
	head = newNode;
	print_node(head);
	push_back(head, 40);
	push_back(head, 50);
	push_back(head, 60);
	push_back(head, 70);
	print_node(head);
	int len = list_length(head);
	cout << len;

	return 0;
}