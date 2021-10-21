#include<iostream>
using namespace std;

class Fraction {
    int numerator, denominator;
  public:
    int a,b;
    Fraction(int numerator, int denominator) {
        a = numerator;
        b = denominator;
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    void displayFraction() {
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void add(Fraction const &f2) {
        cout<<"Addition: "<<endl;
        int lcm = (this -> denominator) * (f2.denominator);
        //cout<<lcm<<endl;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int s = numerator*x + (f2.numerator)*y;
        //cout<<s<<endl;
        cout<<s<<"/"<<lcm<<endl;
        //updating the values of numerator and denominator of fraction object with ans
        this -> numerator = s;
        this -> denominator = lcm;

    }
    void getBack() {
        this -> numerator = a;
        this -> denominator = b;
    }
    void multiply(Fraction const &f2) {
        int n = this -> numerator * f2.numerator;
        int d = this -> denominator * f2.denominator;
        cout<<"Multiply: "<<endl;
        cout<<n<<"/"<<d;
        this -> numerator = n;
        this -> denominator = d;
        cout<<endl;
    }
    void simplify() {
        cout<<"simplified: "<<endl;
        int m = min(this -> numerator, this -> denominator);
        for(int i = 2; i<=m; i++) {
            if(numerator%i == 0 && denominator%i == 0) {
                cout<<(numerator/i)<<"/"<<(denominator/i)<<endl;
            }
        }
        getBack();
    }
};

int main() {
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3(20,4);
    cout<<"Fraction1: "<<endl;
    f1.displayFraction();
    cout<<"Fraction2: "<<endl;
    f2.displayFraction();
    f1.add(f2);
    f1.simplify();
    f1.multiply(f2);
    f1.simplify();
    cout<<"Fraction 3: "<<endl;
    f3.displayFraction();
    f3.add(f2);
    f3.simplify();
    f3.multiply(f2);
    f3.simplify();
    return 0;
}
