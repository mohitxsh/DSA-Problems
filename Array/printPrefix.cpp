#include<iostream>
#include<cstring>
using namespace std;

void prefixprint(char input[]) {
    for(int i=0; i<strlen(input); i++) {
        for(int s=0; s<=i; s++) {
            cout<<input[s];
        }
        cout<<endl;
    }
}

int main() {
    char a[10] = "abcd";
    prefixprint(a);
    return 0;
}
