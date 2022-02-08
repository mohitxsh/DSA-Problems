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

//check for leaf node
bool isLeaf(Node* root){
    if(root->left == NULL && root->right == NULL) return true;
    else return false;
}

//boundary traversal
void addLeftBoundary(Node* root, vector<int>& res){
    Node* curr = root->left;
    while(curr){
        if(!isLeaf(curr)){
            res.push_back(curr->val);
        }
        if(curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addRightBoundary(Node* root, vector<int>& res){
    Node* curr = root->right;
    vector<int> temp;
    while(curr){
        if(!isLeaf(curr)){
            temp.push_back(curr->val);
        }
        if(curr->right) curr = curr->right;
        else curr = curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}

void addLeaves(Node* root, vector<int>& res){
    if(isLeaf(root)){
        res.push_back(root->val);
        return;
    }
    if(root->left){
        addLeaves(root->left,res);
    }
    if(root->right){
        addLeaves(root->right,res);
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(7);
    root->left->left = new Node(4);
    root->left->left->left = new Node(5);
    root->left->left->right = new Node(6);
    vector<int> res;
    res.push_back(root->val);
    addLeftBoundary(root,res);
    addLeaves(root, res);
    addRightBoundary(root,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}