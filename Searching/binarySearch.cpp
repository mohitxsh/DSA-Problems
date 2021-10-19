#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid] == key){
            return mid;
        }else if(a[mid] > key){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key:"<<endl;
    cin>>key;
    sort(a,a+n);
    int pos = binarySearch(a,n,key);
    if(pos == -1) {
        cout<<"key not found"<<endl;
    }else {
        cout<<"key found at index "<<pos<<endl;
    }
    return 0;
}
