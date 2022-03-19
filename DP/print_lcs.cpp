#include <bits/stdc++.h>
using namespace std;

int cache[101][101]; 

int lcs(string s1, string s2, int n, int k){
    if(n==0 || k==0){
        return 0;
    }
    if(cache[n][k] != -1){
        return cache[n][k];
    }
    if(s1[n-1] == s2[k-1]){
        cache[n][k] = 1 + lcs(s1,s2,n-1,k-1);
    }else{
        cache[n][k] = max(lcs(s1,s2,n-1,k), lcs(s1,s2,n,k-1));
    }
    return cache[n][k];
}

int lcs1(string s1, string s2, int N, int K){
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int i=N, j=K;
    string lcs="";
    while(i>=0 and j>=0){
        if(s1[i-1] == s2[j-1]){
            lcs+=s1[i-1];
            i--;
            j--;
        }else{
            if(dp[i][j-1] > dp[i-1][j]){
                j--;
            }else{
                i--;
            }
        } 
    }
    reverse(lcs.begin(),lcs.end());
    cout<<dp[N][K]<<endl;
    cout<<"--------------"<<endl;
    cout<<lcs<<endl;
    return 0;
}

int main() {
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int n = s1.size();
    int k = s2.size();
    memset(cache, -1, sizeof(cache));
    int res = lcs(s1,s2,n,k);
    cout<<res<<endl;
    cout<<"-----------------"<<endl;
    lcs1(s1,s2,n,k);
    return 0;
}