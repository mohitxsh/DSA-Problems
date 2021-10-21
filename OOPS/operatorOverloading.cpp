#include<bits/stdc++.h>
using namespace std;

class Fraction {
    int numerator, denominator;
public:
    int on, od;
    Fraction(int a, int b) {
        on = a;
        od = b;
        numerator = a;
        denominator = b;
    }
    void display() {
        cout<<numerator<<"/"<<denominator<<endl;
    }
    Fraction operator+(Fraction const &f2) const{
        int lcm = this -> denominator * f2.denominator;
        int x = lcm/this -> denominator;
        int y = lcm/f2.denominator;
        int addNum = (this -> numerator * x) + (f2.numerator * y);
        Fraction fnew(addNum,lcm);
        return fnew;
    }
    void simplify() {
        int g = __gcd(numerator, denominator);
        cout<<"simplified:"<<endl;
        cout<<numerator/g<<"/"<<denominator/g<<endl;
    }
    Fraction operator* (Fraction const &f2) const{
        int n = this -> numerator * f2.numerator;
        int d = this -> denominator * f2.denominator;
        Fraction fnew(n,d);
        return fnew;
    }
    bool operator==(Fraction const &f2) const{
        return(numerator == f2.numerator && denominator == f2.denominator);
    }
    Fraction& operator++() {
        numerator = numerator + denominator;
        return *this;
    }
    Fraction operator++(int) {
        Fraction fnew(numerator, denominator);
        numerator = numerator + denominator;
        return fnew;
    }
    void getBack() {
        numerator = on;
        denominator = od;
    }
    Fraction& operator+=(Fraction const &f2) {
        int lcm = this -> denominator * f2.denominator;
        int x = lcm/this -> denominator;
        int y = lcm/f2.denominator;
        int addNum = (this -> numerator * x) + (f2.numerator * y);
        numerator = addNum;
        denominator = lcm;
        return *this;
    }
};

int main() {
    Fraction f1(10,3);
    Fraction f2(5,3);
    f1.display();
    f2.display();
    Fraction f3 = f1 + f2;
    f3.display();
    f3.simplify();
    Fraction f4 = f1 * f2;
    f4.display();
    f4.simplify();
    if(f1 == f2) {
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }
    /*Fraction f5 = ++(++f1);
    f1.display();
    f5.display();*/
    Fraction f6 = f1++;
    f1.display();
    f6.display();
    cout<<"--------"<<endl;
    f1.getBack();
    f1 += f2;
    f1.display();
    f1.simplify();
    return 0;
}
