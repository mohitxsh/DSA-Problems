#include<iostream>
using namespace std;

int print2dArray(int input[][5], int r, int c){
    cout<<"The 2d array is: "<<endl;
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main() {
    int a[5][5];
    cout<<"Enter the number of rows and columns: "<<endl;
    int m, n;
    cin>>m>>n;
    cout<<"Enter the elements in the 2d array: "<<endl;
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    print2dArray(a, m, n);
    return 0;
}
