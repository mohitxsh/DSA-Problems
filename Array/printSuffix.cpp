#include<iostream>
#include<cstring>
using namespace std;

void prefixprint(char input[]) {
    for(int i=strlen(input)-1; i>=0; i--) {
        for(int e=strlen(input)-1; e>=i; e--) {
            cout<<input[e];
        }
        cout<<endl;
    }
}

int main() {
    char a[10] = "abcd";
    prefixprint(a);
    return 0;
}
