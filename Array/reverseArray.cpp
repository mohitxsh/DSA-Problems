#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int e=n-1;
    /*while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }*/
    for(int s=0;s<=e;s++){
        swap(a[s],a[e]);
        e--;
    }
    cout<<"Reversed array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
