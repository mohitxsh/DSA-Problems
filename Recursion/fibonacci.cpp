#include<iostream>
using namespace std;

int fibo(int n) {
    // base case
    if(n == 0){
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    // assumption
    int output1 = fibo(n-1);
    int output2 = fibo(n-2);
    // calculation
    return output1 + output2;
}

int main() {
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}
