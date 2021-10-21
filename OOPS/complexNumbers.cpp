#include<iostream>
using namespace std;

class ComplexNumber{
    int realPart, complexPart;
public:
    ComplexNumber(int realPart, int complexPart) {
        this -> realPart = realPart;
        this -> complexPart = complexPart;
    }

    void print() {
        cout<<"Complex Number: "<<endl;
        cout<<realPart<<"+"<<complexPart<<"i"<<endl;
    }
    void add(ComplexNumber const &c2) {
        int newRealPart = this -> realPart + c2.realPart;
        int newComplexPart = this -> complexPart + c2.complexPart;
        cout<<"Addition: "<<endl;
        cout<<newRealPart<<"+"<<newComplexPart<<"i"<<endl;
    }
    void multiply(ComplexNumber const &c2) {
        int newRealPart = (this -> realPart) * (c2.realPart);
        int newComplexPart = (this -> complexPart) * (c2.complexPart);
        cout<<"Multiply: "<<endl;
        cout<<newRealPart<<"+"<<newComplexPart<<"i"<<endl;
    }
};

int main() {
    ComplexNumber c1(3,2);
    c1.print();
    ComplexNumber c2(2,3);
    c2.print();
    c1.add(c2);
    c1.multiply(c2);
    return 0;
}
