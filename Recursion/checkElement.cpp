#include<iostream>
using namespace std;

bool checkElement(int a[], int n, int x){
    if(n==0){
        return false;
    }
    if(a[0] == x){
        return true;
    }
    bool checkSmall = checkElement(a+1,n-1,x);
    return checkSmall;
}

int main(){
    int a[] = {1,2,3};
    int n = 3;
    int x = 6;
    if(checkElement(a,n,x)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
