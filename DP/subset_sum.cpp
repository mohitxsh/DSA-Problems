#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& subset, int sum ){
    bool dp[100][100];
    for(int i=0; i<subset.size()+1;i++){
        dp[i][0] = false;
    }
    for(int j=0; j<sum+1;j++){
        dp[0][j] = true;
    }
    for(int i=1;i<subset.size()+1;i++){
        for(int j=1;j<sum+1;j++){
            if(subset[i]>sum){
                dp[i][j] = dp[i-1][j];
            }else dp[i][j] = (dp[i-1][j-subset[i-1]] || dp[i-1][j]);
        }
    }
    return dp[subset.size()][sum];
}

int main(){
    vector<int> subset = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    cout << solve(subset, sum);
    return 0;
}