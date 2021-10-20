#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) {
    for(int count=1;count<=n-1;count++) { //loop runs for n-1 times which happens in the worst case scenario
            int flag=0; //setting the value of flag as 0 before the 2nd loop is triggered
        for(int j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){ //comparing adjacent numbers
                swap(a[j],a[j+1]);
                int flag = 1; //if any swap is made the flag gets updated to 1
            }
        }
        if(flag == 0) break; //if flag remains 0 after the second loop no swap was made which means the array is sorted
        }                    //thats why we break the loop and time complexity becomes n instead of n^2
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
