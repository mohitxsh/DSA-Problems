#include<bits/stdc++.h>
using namespace std;

int partitionFun(int a[], int s, int e){
    int i=s;
    int pivot = a[e];
    for(int j=s;j<=e-1;j++){
        if(a[j]<pivot){
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[i],a[e]);
    return i;
}

void quickSort(int a[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partitionFun(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

//driver code
int main(){
    int a[] = {8,5,2,1,7,3,4};
    int s = 0;
    int e = 6;
    quickSort(a,s,e);
    for(int i=0;i<=e;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
