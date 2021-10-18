#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    vector<int> v; // static
    vector<int> *vp = new vector<int>(); // dynamic
    /*v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    v[1] = 100;*/

    /*for(int i=0;i<100;i++) {
        cout<<"Capacity:"<<v.capacity()<<endl;
        v.push_back(i+1);
        cout<<"Size:"<<v.size()<<endl;
    }*/
    /*for(int i=0;i<v.size();i++) {
        cout<<v.at(i)<<endl;
    }*/
    vector<int> v1(10,5);
    for(int i=0;i<v1.size();i++) {
        cout<<v1.at(i)<<endl;
    }
    cout<<"-------------------------"<<endl;
    vector<int> v2;
    v2.push_back(5);
    v2.push_back(3);
    v2.push_back(7);
    sort(v2.begin(),v2.end());
    for(int i=0;i<v2.size();i++){
        cout<<v2.at(i)<<endl;
    }
}
