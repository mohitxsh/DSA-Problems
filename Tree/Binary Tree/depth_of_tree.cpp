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

int depth(Node* root){
    if(root==NULL) return 0;
    int l = depth(root->left);
    int r = depth(root->right);
    return 1+max(l,r);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->right = new Node(6);
    int d = depth(root);
    cout<<d<<endl;
    return 0;
}