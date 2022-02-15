#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v, int target, vector<vector<int>>& res, vector<int>& temp, int start){
    if(target<0) return;
    if(target==0){
        res.push_back(temp);
        return;
    }
    for(int i=start;i<v.size();i++){
        temp.push_back(v[i]);
        solve(v,target-v[i],res,temp,i);
        //backtrack
        temp.pop_back();
    }
}

int main(){
    vector<int> v{1,2,3,4,8};
    vector<int> temp;
    vector<vector<int>> res;
    int target=6;
    solve(v,target,res,temp,0);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j];
        }
        cout<<" ";
    }
}