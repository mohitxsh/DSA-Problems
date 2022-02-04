#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//postorder traversal iteratively using 1 stack
void postorder(TreeNode* root){
    stack<TreeNode*> s;
    vector<int> v;
    TreeNode* curr = root;
    TreeNode* temp;
    while(curr!=NULL || !s.empty()){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }else{
            temp = s.top()->right;
            if(temp==NULL){
                temp = s.top();
                s.pop();
                v.push_back(temp->data);
                while(!s.empty() && temp==s.top()->right){
                    temp = s.top();
                    s.pop();
                    v.push_back(temp->data);
                }
            }else {
                curr = temp;
            }
        }
    }
    for(auto x : v){
        cout<<x<<" ";
    }
}

int main() {
    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left  = new TreeNode(4);
    postorder(root);
    return 0;
}