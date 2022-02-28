#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& weights, vector<int>& prices, vector<vector<int>>& dp, int n, int w){
    if(n==0 or w==0){
        return 0;
    }
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    if(weights[n]>w){
        dp[n][w] = solve(weights,prices,dp,n+1,w);
    }
    return dp[n][w] = max(prices[n] + solve(weights,prices,dp,n-1,w-weights[n]),solve(weights,prices,dp,n-1,w));
}

int solve1(vector<int>& weights, vector<int>& prices, int N, int W){
    vector<vector<int>> dp(N+1, vector<int>(W+1));
    for(int i=0;i<N+1;i++){
        dp[i][0] = 0;
    }
    for(int j=0;j<W+1;j++){
        dp[0][j] = 0;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=W;j++){
            if(weights[i-1]>W){
                dp[i][j] = dp[i-1][j];
            }
            else dp[i][j] = max(prices[i] + dp[i-1][j-weights[i]], dp[i-1][j]);
        }
    }
    return dp[N][W];
}

int main() {
    cout<<"Enter size:";
    int n;
    cin>>n;
    cout<<"Enter weight:";
    int w;
    cin>>w;
    vector<int> weights(n);
    cout<<"Enter weights:"<<endl;
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    vector<int> prices(n);
    cout<<"Enter prices:"<<endl;
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(w+1,-1));
    cout<<"Result:";
    cout<<solve(weights,prices,dp,n,w)<<endl;
    cout<<solve1(weights,prices,n,w);
    return 0;
}