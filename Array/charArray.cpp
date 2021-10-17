#include<iostream>
using namespace std;
int main() {
    char name[100];
    cin>>name;
    name[3] = 'z';
    name[4] = 'x';
    cout<<name;
    return 0;
}
