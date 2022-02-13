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

//store parent nodes
void storeParents(unordered_map<Node*, Node*>& parent_mp, Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp->left){
            parent_mp[temp->left] = temp;
            q.push(temp->left);
        }
        if(temp->right){
            parent_mp[temp->right] = temp;
            q.push(temp->right);
        }
    }
}

void nodesAtK(Node* root, int k, Node* target){
    unordered_map<Node*,Node*> parent_mp;
    storeParents(parent_mp, root);

    unordered_map<Node*,bool> visited_mp;
    queue<Node*> q;
    visited_mp[target] = true;
    q.push(target);
    int curr_level=0;
    while(!q.empty()){
        int size = q.size();
        if(curr_level++ == k) break;
        for(int i=0;i<size;i++){
            Node* temp = q.front(); 
            q.pop();
            if(temp->left && !visited_mp[temp->left]){
                q.push(temp->left);
                visited_mp[temp->left] = true;
            }
            if(temp->right && !visited_mp[temp->right]){
                q.push(temp->right);
                visited_mp[temp->right] = true;
            }
            if(parent_mp[temp] && !visited_mp[parent_mp[temp]]){
                q.push(parent_mp[temp]);
                visited_mp[parent_mp[temp]] = true;
            }
        }
    }
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    nodesAtK(root,1,root->left);
    return 0;
}