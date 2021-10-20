#include<bits/stdc++.h>
using namespace std;

void mergeFun(int x[], int y[], int a[], int s, int e){
    int mid = (s+e)/2;
       int i=s;
       int j = mid+1;
       int k = s;
       while(i<=mid && j<=e){
           if(x[i] < y[j]){
            a[k] = x[i];
            i++;
            k++;
           }else{
             a[k] = y[j];
             j++;
             k++;
           }
       }
       //below conditions pass left out elements in the sub array to the main array
       while(i<=mid){
        a[k] = x[i];
        k++;
        i++;
       }
       while(j<=e){
        a[k] = y[j];
        k++;
        j++;
       }
}

void mergeSort(int a[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    int x[100];
    int y[100];
    for(int i=s;i<=mid;i++){
        x[i] = a[i];
    }
    for(int i=mid+1;i<=e;i++){
        y[i] = a[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    mergeFun(x,y,a,s,e);
}

int main(){
    int a[] = {2,4,5,1,3,8,9};
    mergeSort(a,0,6);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
