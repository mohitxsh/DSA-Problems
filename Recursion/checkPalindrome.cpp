#include<bits/stdc++.h>
using namespace std;

bool checkPal(int a[], int s, int e){
    if(s>e){
        return true;
    }
    if(a[s] == a[e]){
        return checkPal(a,s+1,e-1);
    }
    else{
        return false;
    }
}

int main(){
    int a[] = {1,2,3,2,1};
    int s=0;
    int e=4;
    cout<<checkPal(a,s,e);
    return 0;
}
