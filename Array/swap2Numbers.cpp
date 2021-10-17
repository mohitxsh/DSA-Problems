#include<iostream>
using namespace std;

int main() {

    int a,b;
    cin>>a>>b;
    cout<<"Before swapping: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //swap logic
    /*int temp = a;
    a = b;
    b = temp;*/
    /*a=a^b;
    b=a^b;
    a=a^b;*/
    swap(a,b);
    //printing swapped values
    cout<<"After swapping: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
