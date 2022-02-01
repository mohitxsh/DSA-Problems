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

//inorder traversal recursive
void printInorder(Node* root){
    if(root==NULL) return;
    printInorder(root->left);
    cout<<root->val<<endl;
    printInorder(root->right);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    printInorder(root);
    return 0;
}