#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    struct Node* left;
    struct Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

//preorder traversal using recursion
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<endl;
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    preOrder(root);
    return 0;
}