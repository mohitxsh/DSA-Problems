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

//inorder travesal iterative
void printInorder(Node* root){
    stack<Node*> s;
    Node* n = root;
    vector<int> res;
    while(1){
        if(n!=NULL){
            s.push(n);
            n = n->left;
        }
        else{
            if(s.empty()) break;
            n = s.top();
            s.pop();
            res.push_back(n->val);
            n = n->right;
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    printInorder(root);
    return 0;
}