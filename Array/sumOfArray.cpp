#include <iostream>
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
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"Sum: "<<sum;
    return 0;
}
