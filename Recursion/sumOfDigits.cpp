#include<iostream>
using namespace std;

int sumOfDigits(int n){
    //base case
    if(n==0){
        return 0;
    }
    //assumption
    int smallAns = sumOfDigits(n/10);
    //calculation
    return n%10+smallAns;
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
    return 0;
}
