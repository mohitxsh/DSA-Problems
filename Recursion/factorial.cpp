#include<iostream>
using namespace std;

int fact(int n) {
    /// base case
    if(n == 1){
        return 1;
    }
    /// assumption or recursive case
    int smallAns = fact(n-1);
    /// calculation
    int ans = n*smallAns;
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
