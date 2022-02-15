#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& res, vector<int>& v, vector<int>& nums, vector<bool>& b){
    if(v.size() == nums.size()){
        res.push_back(v);
    }
    for(int i=0;i<nums.size();i++){
        if(!b[i]){
            v.push_back(nums[i]);
            b[i]=true;
            solve(res,v,nums,b);
            //backtrack
            b[i]=false;
            v.pop_back();
        }
    }
}

int main(){
    vector<int> nums{1,2,3};
    vector<int> v;
    vector<bool> b(nums.size(), false);
    vector<vector<int>> res;
    solve(res, v, nums, b);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
    return 0;
}