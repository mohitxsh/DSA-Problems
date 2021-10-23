#include<iostream>
using namespace std;

int findIndex(int a[], int n, int x, int i){
    if(i==n){
        return -1;
    }
    if(a[i] == x){
        return i;
    }
    return findIndex(a,n,x,i+1);
}

int main(){
    int a[] = {2,3,2,5,3};
    int n = 5;
    int x = 6;
    int i = 0;
    cout<<findIndex(a,n,x,i);
    return 0;
}
