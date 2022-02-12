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


//bottom view
void top(Node* root){
    map<int, int> mp;
    queue<pair<Node*, int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        Node* temp = p.first;
        int x = p.second;
        mp[x] = (temp->val);
        if(temp->left!=NULL){
            q.push({temp->left, x-1});
        }
        if(temp->right!=NULL){
            q.push({temp->right, x+1});
        }
    }
    for(auto x : mp){
        cout<<x.second<<" ";
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    top(root);
    return 0;
}