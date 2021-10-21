#include<iostream>
using namespace std;

class Student{
public:
    int age;
    int rollNumber;
};

int main() {
    Student s1;
    s1.age = 21;
    s1.rollNumber = 30;
    cout<<s1.age<<" "<<s1.rollNumber<<endl;
    //dynamically
    Student* s2 = new Student;
    s2 -> age = 20;
    s2 -> rollNumber = 10;
    //cout<<(*s2).age<<" "<<(*s2).rollNumber<<endl;
    cout<<(s2 -> age)<<" "<<(s2 -> rollNumber)<<endl;
    return 0;
}
