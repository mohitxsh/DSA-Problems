#include<iostream>
using namespace std;
class Student{
public:
    int rollNumber;
    int age;
    Student() {
        cout<<"Contructor initialized"<<endl;
    }
    Student(int age) {
        cout<<"Contructor2 initialized"<<endl;
        this->age = age;
    }
    Student(int a, int b) {
        //cout<<this<<endl;
        age = a;
        rollNumber = b;
        cout<<"Constructor 3 called"<<endl;
    }
    void display() {
        cout<<age<<" "<<rollNumber;
    }
    ~Student() {
        cout<<"Destructor called!"<<endl;
    }

};

int main() {
    Student s1(10,100);
    s1.display();
    cout<<endl;
    Student s2(s1);
    s2.display();
    cout<<endl;

    Student* s3 = new Student(20,25);
    s3 -> display();
    cout<<endl;
    Student* s4 = new Student(*s3);
    s4 -> display();
    Student a1(1,2);
    Student a2(2,4);
    a2 = a1;    //copy operator
    a2.display();
    cout<<endl;
    //cout<<&s1<<endl;
    //s1.age = 21;
    //s1.rollNumber = 30;
    delete s3;
    delete s4;
    return 0;
}
