#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) { //loop runs for n-1 times which happens in the worst case scenario
    for(int count=1;count<=n-1;count++) {
        for(int j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){ //comparing adjacent numbers
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    bubbleSort(a,n);
    //printing sorted array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
