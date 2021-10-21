#include<iostream>
using namespace std;

class Student {
    public:
    int age;
    int rollNumber;
    static int totalStudents;
    Student() {
        totalStudents++;
    }
    void display() {
        cout<<age<<" "<<rollNumber;
    }
    /// declaring static function below
    static int getTotalStudents() {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1,s2,s3,s4,s5;
    //cout<<Student::totalStudents<<endl;
    /// calling static function that prints the value of static data member totalStudents
    cout<<Student::getTotalStudents();
    return 0;
}
