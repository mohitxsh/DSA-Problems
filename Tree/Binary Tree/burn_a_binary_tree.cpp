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

void burnTree(Node* root, Node* target){
    unordered_map<Node*,Node*> parent_mp;
    storeParents(parent_mp, root);

    unordered_map<Node*,bool> visited_mp;
    queue<Node*> q;
    visited_mp[target] = true;
    q.push(target);
    int res=0;
    while(!q.empty()){
        int size = q.size();
        int flag=0;
        for(int i=0;i<size;i++){
            Node* temp = q.front(); 
            q.pop();
            if(temp->left && !visited_mp[temp->left]){
                flag = 1;
                q.push(temp->left);
                visited_mp[temp->left] = true;
            }
            if(temp->right && !visited_mp[temp->right]){
                flag=1;
                q.push(temp->right);
                visited_mp[temp->right] = true;
            }
            if(parent_mp[temp] && !visited_mp[parent_mp[temp]]){
                flag=1;
                q.push(parent_mp[temp]);
                visited_mp[parent_mp[temp]] = true;
            }
        }
        if(flag==1) res++;
    }
    cout<<res<<endl;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    burnTree(root,root->left);
    return 0;
}