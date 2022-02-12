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

//postorder iterative
void postorder(Node* root){
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->right!=NULL) st1.push(root->right);
        if(root->left!=NULL) st1.push(root->left);
    }
    while(!st2.empty()){
        cout<<st2.top()->val<<endl;
        st2.pop();
    }
}

//postorder iterative using 1 stack


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    postorder(root);
    return 0;
}