#include<iostream>
using namespace std;

void print(int n){
    // base case
    if(n == 0){
        return;
    }
    // assumption
    print(n-1);
    // calculation
    cout<<n<<" ";
}

void print2(int n) {
    if(n == 0) {
        return;
    }
    cout<<n<<" ";
    print2(n-1);
}

int main(){
    int n;
    cin>>n;
    print(n);
    cout<<endl;
    print2(n);
    return 0;
}
