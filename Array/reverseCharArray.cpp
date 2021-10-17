#include<iostream>
using namespace std;

int length(char input[]){
    int count = 0, i = 0;
    while(input[i] != '\0') {
        i++;
        count++;
    }
    return count;
}

void reverse(char input[]) {
    int s=0;
    int e=length(input)-1;
    while(s<e){
        swap(input[s],input[e]);
        s++;
        e--;
    }
    return;
}

int main() {
    char a[100];
    cin.getline(a,100);
    //cin>>a;
    cout<<length(a)<<endl;;
    reverse(a);
    cout<<a;
    return 0;
}
