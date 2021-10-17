#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Input array: "<<endl;
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed array: "<<endl;
    for (int i=n-1;i>=0;i--) {
        cout<<a[i]<<" ";
    }
    return 0;
}
