#include<bits/stdc++.h>
using namespace std;
// print the positions of an element
void printAllPositions(int a[], int n, int x, int i){
    if(i == n){
        return;
    }
    if(a[i] == x){
        cout<<i<<" ";
    }
    printAllPositions(a,n,x,i+1);
}
//count the number of occurence of an element
void countOcc(int a[], int n, int x, int i, int &ans){
    if(i == n){
        return;
    }
    if(a[i] == x){
        ans++;
    }
    countOcc(a,n,x,i+1,ans);
}

//store the positions in a vector
void storeAllPositions(int a[], int n, int x, int i, vector<int> &v){
    if(i == n){
        return;
    }
    if(a[i] == x){
        v.push_back(i);
    }
    storeAllPositions(a,n,x,i+1,v);
}

int main(){
    int a[] = {2,3,8,2,3,2};
    int n = 6;
    int x = 2;
    int i = 0;
    int ans = 0;
    vector<int> v;
    //printAllPositions(a,n,x,i);
    //countOcc(a,n,x,i,ans);
    storeAllPositions(a,n,x,i,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
