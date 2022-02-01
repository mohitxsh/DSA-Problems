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

//print level wise
void printLevelWise(Node* root){
    vector<vector<int>> res;
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> v;
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* n = q.front();
            q.pop();
            if(n->left!=NULL) q.push(n->left);
            if(n->right!=NULL) q.push(n->right);
            v.push_back(n->val);
        }
        res.push_back(v);
    }
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    printLevelWise(root);
    return 0;
}