#include <bits/stdc++.h>

using namespace std;

void printSubsequence(string a, string output){
    //base case
    //once the input string becomes null we print output
    if(a[0] == '\0'){
        cout<<output<<endl;
        return;
    }
    //below recursive function produces output excluding the first character of input string
    printSubsequence(a.substr(1),output);
    //below recursive function produces output including the first character of input string
    printSubsequence(a.substr(1),output+a[0]);
}

int main()
{
    string a;
    string output = "";
    cin>>a;
    printSubsequence(a,output);
    return 0;
}
