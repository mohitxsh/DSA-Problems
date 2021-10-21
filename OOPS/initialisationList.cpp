#include<iostream>
using namespace std;

class Student {
public:
    int age;
    int const rollNumber;
    int &x;
    /// initialization list below
    Student(int a, int r): rollNumber(r), age(a), x(this->age) {
    }
    void display() {
        cout<<age<<" "<<rollNumber<<endl;
    }

};

int main() {
    Student s1(10,100);
    s1.display();
    cout<<s1.x;
}
