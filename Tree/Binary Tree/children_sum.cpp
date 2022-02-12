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

void childrenSum(Node* root){
    if(root==NULL) return;
    int childSum=0;
    if(root->left) childSum+=root->left->val;
    if(root->right) childSum+=root->right->val;
    if(childSum<root->val){
        if(root->left) root->left->val=childSum;
        if(root->right) root->right->val=childSum;
    }
    else if(childSum>=root->val){
        root->val+=childSum;
    }
    childrenSum(root->left);
    childrenSum(root->right);
    int bs=0;
    if(root->left) bs+=root->left->val;
    if(root->right) bs+=root->right->val;
    if(root->left || root->right) root->val=bs;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    childrenSum(root);
    return 0;
}