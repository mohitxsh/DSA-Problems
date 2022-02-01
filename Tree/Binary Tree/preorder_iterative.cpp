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

//preorder traversal iteratively
void preOrder(Node* root){
    if(root == NULL) return;
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* n = s.top();
        s.pop();
        cout<<n->val<<endl;
        if(n->right!=NULL) s.push(n->right);
        if(n->left!=NULL) s.push(n->left);
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    preOrder(root);
    return 0;
}