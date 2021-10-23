#include<bits/stdc++.h>
using namespace std;

double gSum(int k){
    // case
    if(k == 0){
        return 1;
    }
    // recursive
    double smallAns = gSum(k-1);
    // calc
    return smallAns + 1.0/pow(2,k);
}

int main(){
    int k;
    cin>>k;
    cout<<gSum(k);
    return 0;
}
