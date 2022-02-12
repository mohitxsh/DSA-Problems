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


//vertical order traversal
void vertical(Node* root){
    map<int, map<int,multiset<int>>> mp;
    queue<pair<Node*, pair<int, int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        Node* temp = p.first;
        int x = p.second.first;
        int y = p.second.second;
        mp[x][y].insert(temp->val);
        if(temp->left){
            q.push({temp, {x-1,y+1}});
        }
        if(temp->right){
            q.push({temp, {x+1,y+1}});
        }
    }
    vector<vector<int>> res;
    for(auto x : mp){
        vector<int> v{};
        for(auto k : x.second){
            v.insert(v.end(),k.second.begin(),k.second.end());
        }
        res.push_back(v);
    }
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    vertical(root);
    return 0;
}