#include<bits/stdc++.h>
using namespace std;

int sumArray(int a[], int n){
    //base case
    if(n==1){
        return a[n-1];
    }
    //recursive case
    int smallSum = sumArray(a,n-1); //calling recursion on n-1 elements
    //calculation
    return a[n-1]+smallSum;
}

int sumArray2(int a[], int n){
    if(n==1){
        return a[n-1];
    }
    int small = a[0]+a[1]; //performing small sum of first 2 elements
    int smallSum = sumArray(a+2,n-2);
    return small+smallSum;
}

int sumArray3(int a[], int n, int i){
    if(i==n){
        return 0;
    }
    int smallSum = sumArray3(a,n,i+1);
    return a[i]+smallSum;
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int n=6;
    int i=0;
    cout<<sumArray2(a,n);
    return 0;
}
