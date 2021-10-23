#include<bits/stdc++.h>
using namespace std;

void replaceChar(char a[]){
    if(a[0] == '\0'){
        return;
    }
    if(a[0] == 'a'){
        a[0] = 'x';
    }
    replaceChar(a+1);
}

int main(){
    char a[100];
    cin>>a;
    replaceChar(a);
    cout<<a<<endl;
    return 0;
}
