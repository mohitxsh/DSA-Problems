#include<iostream>
using namespace std;

int lastIndex(int a[], int n, int x, int i){
    if(i < 0) {
        return -1;
    }
    if(a[i] == x){
        return i;
    }
    return lastIndex(a,n,x,i-1);
}

int lastIndex2(int a[], int n, int x){
    if(n == 0){
        return -1;
    }
    if(a[n-1] == x){
        return n-1;
    }
    return lastIndex2(a,n-1,x);
}

int main(){
    int a[] = {5,2,3,2,5,2,3};
    int n = 7;
    int x = 3;
    int i = n-1;
    cout<<lastIndex2(a,n,x);
    return 0;
}
