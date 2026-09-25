#include<iostream>
using namespace std;
struct Node {
	int value;
	Node* left;
	Node* right;
};

Node* made_node(int v) {
	Node* n = new Node;
	n->value = v;
	n->left = nullptr;
	n->right = nullptr;
	return n;
}

//ǰ�� ��--��--��
void preorder(Node* p){
	if (p == nullptr) { return ; }
	cout << p->value<<' ';
	preorder(p->left);
	preorder(p->right);
}

//���� ��--��--��
void inorder(Node* p) {
	if (p == nullptr) { return ; }
	inorder(p->left);
	cout << p->value << ' ';
	inorder(p->right);
}
//���� ��--��--��
void postorder(Node* p) {
	if (p == nullptr) { return ; }
	postorder(p->left);
	postorder(p->right);
	cout << p->value << ' ';
}

int count_node(Node* p) {
	if (p == nullptr) { return 0; }
	return 1 + count_node(p->left) + count_node(p->right);
}

int height(Node* p) {
	if (p == nullptr) { return 0; }
	int lh = height(p->left);
	int rh = height(p->right);
	return 1 + (lh > rh ? lh : rh);
}

int main() {
    /*
                  1
			     /  \
			   2      3
			 / \     /  \
   			4   5   6    7
	                      \
						   8
	
	
	*/
	Node* root = made_node(1);
	root->left = made_node(2);
	root->right = made_node(3);
	root->left->left= made_node(4);
	root->left->right = made_node(5);
	root->right->left = made_node(6);
	root->right->right = made_node(7);
	root->right->right->right = made_node(8);
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl << count_node(root);
	cout << endl << height(root);
	return 0;
}