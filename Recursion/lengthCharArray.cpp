#include<iostream>
using namespace std;

void length(char a[], int &count){
    if(a[0] == '\0'){
        return;
    }
    count++;
    length(a+1,count);
}

int main(){
    int count = 0;
    char a[] = "abcdef";
    length(a,count);
    cout<<count;
    return 0;
}
