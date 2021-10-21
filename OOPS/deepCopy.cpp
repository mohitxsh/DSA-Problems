#include<iostream>
#include<cstring>
using namespace std;

class Student{
    int age;
    char *name;
public:
    Student(int a, char *n) {
        this->age = a;
        this ->name = new char[(strlen(n)+1)];
        strcpy(this->name,n);
    }
    void display() {
        cout<<age<<" "<<name<<endl;
    }
};

int main() {
    char name[] = "abcd";
    Student s1(20,name);
    s1.display();
    name[3]='e';
    Student s2(10,name);
    s2.display();
    s1.display();
    return 0;
}
