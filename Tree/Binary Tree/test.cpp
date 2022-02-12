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

void postorder(Node* root){
    stack<Node*> s;
    vector<int> v;
    Node* curr = root;
    Node* temp;
    while(!s.empty() || curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }else{
            temp = s.top()->right;
            if(temp == NULL){
                temp = s.top();
                v.push_back(temp->val);
                s.pop();
                while(!s.empty() && temp==s.top()->right){
                    temp = s.top();
                    s.pop();
                    v.push_back(temp->val);
                }
            }else curr = temp;
        }
    }
    for(auto x : v){
        cout<<x<<endl;
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    postorder(root);
    return 0;
}