#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //largest
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>largest) {
            largest = a[i];
        }
    }
    cout<<"Largest "<<largest<<endl;
    //smallest
    int smallest = INT_MAX;
    for (int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest = a[i];
        }
    }
    cout<<"Smallest "<<smallest;

    return 0;
}
