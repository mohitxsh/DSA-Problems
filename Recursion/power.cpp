#include<iostream>
using namespace std;

int power(int x, int n){
    //base case
    /*if(n == 1){
        return x;
    }*/
    if(n == 0){
        return 1;
    }
    //assumption
    int smallAns = power(x, n-1);
    //calculation
    int ans = x * smallAns;
    return ans;
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
    return 0;
}
