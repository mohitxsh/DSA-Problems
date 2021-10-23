#include<iostream>
using namespace std;

void remConDup(char a[]){
    if(a[0] == '\0'){
        return;
    }
    if(a[0] != a[1]){
        remConDup(a+1);
    }else{
        for(int i=0;a[i]!='\0';i++){
            a[i] = a[i+1];
        }
        remConDup(a);
    }
}

int main(){
    char a[100];
    cin>>a;
    remConDup(a);
    cout<<a;
}
