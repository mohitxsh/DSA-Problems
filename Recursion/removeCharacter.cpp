#include<iostream>
using namespace std;

//removes character 'a'
void removeChar(char a[]){
    if(a[0] == '\0'){
        return;
    }
    if(a[0] != 'a'){
        removeChar(a+1);
    }else{
        for(int i=0;a[i]!='\0';i++){
            a[i] = a[i+1];
        }
        removeChar(a);
    }
}

int main(){
    char a[100];
    cin>>a;
    removeChar(a);
    cout<<a<<endl;
    return 0;
}
