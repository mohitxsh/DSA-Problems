#include<iostream>
using namespace std;

int countZero(int n){
    //base case
    if(n == 0){
        return 0;
    }
    //recursive case
    int smallAns = countZero(n/10);
    //calculation
    if(n%10 == 0){
        return 1+smallAns;
    }
    return smallAns;
}

int main() {
    int n;
    cin>>n;
    cout<<countZero(n)
    return 0;
}
