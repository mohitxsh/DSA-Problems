#include<iostream>
using namespace std;

int multiply(int m, int n){
    // base case
    if(n==1){
        return m;
    }
    // assumption
    int smallAns = multiply(m, n-1);
    // calculation
    return m+smallAns;
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<multiply(m,n);
    return 0;
}
