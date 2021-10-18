#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1 = "abc";
    cout<<s1<<endl;
    string *sp = new string;
    *sp = "def";
    cout<<sp<<endl;
    cout<<*sp<<endl;

    vector<string> v;
    v.push_back(s1);
    v.push_back("hello");
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
        sort(v[i].begin(),v[i].end());
        cout<<v[i]<<endl;
    }

    string s2;
    //getline(cin,s2);
    //cout<<s2;
    string a1 = "Hello";
    string a2 = "World";
    string a3 = a1 + a2;
    cout<<a3.substr(4,3)<<endl;
    string a4 = "abcdef";
    cout<<a4.find("def")<<endl;
    int a5 = 123;
    string a6 = to_string(a5);
    cout<<a6<<endl;
    a6.push_back('5');
    cout<<a6<<endl;
    cout<<atoi(a6.c_str());
    return 0;
}
