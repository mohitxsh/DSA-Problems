#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n) {
    for(int i=0;i<=n-2;i++) { //loop runs for n-2 times to make space for the right side subarray
        int smallest = i; //assigning the smallest to the first element index
        for(int j=i+1;j<=n-1;j++) { //comparing smallest (which holds index) with the elements in the right side array and swapping under given condition
            if(a[j]<a[smallest]) {
                smallest = j;
            }
        }
        swap(a[i],a[smallest]);
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    selectionSort(a,n);
    //printing sorted array
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
