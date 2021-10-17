#include<iostream>
using namespace std;
int main() {
    int a[100][100];
    int m,n;
    cout<<"Enter number of rows and columns: "<<endl;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"Enter element at "<<i<<j<<" position"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
