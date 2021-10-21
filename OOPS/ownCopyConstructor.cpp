#include<iostream>
#include<cstring>
using namespace std;

class Student{
public:
    char* name;
    int age;
    Student(Student const &s) {
        this -> age = s.age;
        this -> name = new char[strlen(s.name)+1];
        strcpy(this -> name, s.name);
    }

    Student(int age, char* name) {
        this -> age = age;
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name, name);
    }
    void display() {
        cout<<name<<" "<<age<<endl;
    }
};

int main() {
    char name[] = "abc";
    Student s1(10,name);
    s1.display();
    Student s2(s1);
    s2.display();
    s2.name[0] = 'x';
    s2.display();
    s1.display();
    return 0;
}
