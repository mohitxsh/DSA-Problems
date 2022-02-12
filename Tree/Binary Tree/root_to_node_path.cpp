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

//root to node path
bool rootToNode(vector<int>& res, Node* root, int k){
    if(root==NULL) return false;
    res.push_back(root->val);
    if(root->val == k) return true;
    if(rootToNode(res,root->left,k) || rootToNode(res,root->right,k)){
        //once the nested recursive fuction returns true
        //the parent recursive function will also return true
        return true;
    }
    res.pop_back();
    return false;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->right = new Node(5);
    vector<int> res;
    int k;
    cin>>k;
    rootToNode(res, root, k);
    for(auto x : res) {
        cout<<x<<" ";
    }
    return 0;
}