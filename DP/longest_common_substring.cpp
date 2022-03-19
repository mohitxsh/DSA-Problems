#include <bits/stdc++.h>
using namespace std;

int lcs1(string s1, string s2, int N, int K){
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = 0;
            }
        }
    }
    int mx = INT_MIN;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=K;j++){
            mx = max(mx, dp[i][j]);
        }
    }
    cout<<mx<<endl;
    return 0;
}

int main() {
    string s1 = "ABCREQF";
    string s2 = "ABCDSAF";
    int n = s1.size();
    int k = s2.size();
    lcs1(s1,s2,n,k);
    return 0;
}