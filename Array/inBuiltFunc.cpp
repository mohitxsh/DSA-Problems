#include<iostream>
#include<cstring>
using namespace std;

/*bool mystrcmp(char a1[], char b1[]) {
    if (strlen(a1) != strlen(b1)) return false;
    for(int i=0;i<strlen(a1);i++){
        if (a1[i] != b1[i]) return false;

    }
    return true;
}*/

/*void mystrcpy(char input1[],char input2[]) {
    for(int i=0;i<strlen(input2);i++){
            input1[i]=input2[i];
    }
    input1[strlen(input2)]='\0';
}*/

void mystrcat(char input1[], char input2[]) {
    int n=strlen(input1);
    int k=0;
    for(int i=n;i<n+strlen(input2);i++){
        input1[i]=input2[k];
        k++;
    }
}

int main() {
    char a[100]="abcdefg", b[100]="hijklmnop";
    cout<<a<<endl;
    mystrcat(a,b);
    cout<<a;
    //int len = strlen(a);
    //cout<<len;
    /*if (strcmp(a,b) == 0) {
        cout<<"Equal"<<endl;
    }
    else {
        cout<<"Not equal"<<endl;
    }*/
    return 0;
}
