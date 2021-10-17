#include<iostream>
using namespace std;
int length(char input[]){
    int count = 0;
    int i=0;
    while(input[i] != '\0'){
        i++;
        count++;
    }
    cout<<count;
    return 0;
}

int main() {
    char name[20];
    cin>>name;
    length(name);
    return 0;
}
