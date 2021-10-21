#include<iostream>
using namespace std;

class Student{
public:
    int rollNumber;
private:
    int age;
public:
    void display() {
        cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge() {
        return age;
    }

    void setAge(int a) {
        age = a;
    }
};

int main() {
    Student s1;
    s1.rollNumber = 30;
    s1.setAge(21);
    s1.display();
    cout<<s1.getAge();
    return 0;
}
