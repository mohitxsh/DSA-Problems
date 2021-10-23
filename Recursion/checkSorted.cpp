#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool checkSmallerSorted = isSorted(a+1, n-1);
    return checkSmallerSorted;
}

bool isSorted2(int a[], int n){
    if(n==0 || n==1){
        return true;
    }
    bool smallerSorted = isSorted(a+1,n-1);
    if(!smallerSorted){
        return false;
    }
    if(a[0]>a[1]){
        return false;
    }else{
        return true;
    }
}

bool isSorted3(int a[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[n-2]>a[n-1]){
        return false;
    }
    return isSorted(a, n-1);
}

int main() {
    int a[] = {1,2,3,5,4};
    int n = 5;
    if(isSorted3(a, n)){
        cout<<"sorted"<<endl;
    }else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}
