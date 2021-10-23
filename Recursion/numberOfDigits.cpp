#include<iostream>
using namespace std;

int countr(long long int n){
    // base case
    if(n == 0){
        return 0;
    }
    // assumption
    int smallCount = countr(n/10);
    // calculation
    return 1+smallCount;

}

int main(){
    long long int n;
    cin>>n;
    cout<<countr(n);
    return 0;
}
