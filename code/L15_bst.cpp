#include<iostream>
using namespace std;
struct Node{
    int value;
    Node* left;
    Node* right;
};

Node* make_node(int v){
    Node* n = new Node;
    n->value = v;
    n->left=nullptr;
    n->right=nullptr;
    return n;
}

Node* insert(Node* root,int v){
    if(root==nullptr){
        return make_node(v);
    }
    if(v < root->value){
        root->left = insert(root->left,v);
    }else if(v > root->value){
        root->right=insert(root->right,v);
    }
    return root;
}

void inorder(Node* root){
    if(root==nullptr){
        return ;
    }
    inorder(root->left);
    cout<<root->value<<' ';
    inorder(root->right);
}

bool search(Node* root , int target){
    if(root == nullptr){
        return false;
    }
    if(root->value == target){
        return true;
    }
    if(target < root->value ){
       return search(root->left , target);
    }else{
       return search(root->right, target);
    }
}

Node* find_min(Node* root){
    if(root==nullptr){
        return nullptr;
    }
    while(root->left!=nullptr){
        root=root->left;
    }
    return root;
}

Node* remove_node(Node* root,int value){
    if(root==nullptr){
        return nullptr;
    }
    if(value < root->value){
        root->left = remove_node(root->left,value);
    }else if(value > root->value){
        root->right = remove_node(root->right,value);
    }else{
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr;
        }
        if(root->left==nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if(root->right==nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* successor = find_min(root->right);
        root->value = successor->value;
        root->right = remove_node(root->right,successor->value);
    }
    return root;
}

int main(){
    Node* r =make_node(8);
    r = insert(r,3);
    r = insert(r,10);
    r = insert(r,1);
    r = insert(r,6);
    r = insert(r,14);
    r = insert(r,4);
    r = insert(r,7);
    r = insert(r,13);
    inorder(r);
/*
    8
  /   \
 3     10
/ \      \
1  6      14
  / \    /
 4   7  13
*/
    cout<<endl<<search(r,6)<<endl;
    cout<<search(r,13)<<endl;
    cout<<search(r,5)<<endl;
    cout<<find_min(r)->value<<endl;
    cout<<find_min(r->right)->value<<endl;
    cout<<"删除 7 后：";
    r = remove_node(r,7);
    inorder(r);
    cout<<endl;

    cout<<"删除 14 后：";
    r = remove_node(r,14);
    inorder(r);
    cout<<endl;
    cout<<"删除 3 后：";
    r = remove_node(r,3);
    inorder(r);
    cout<<endl;
    return 0;
}
