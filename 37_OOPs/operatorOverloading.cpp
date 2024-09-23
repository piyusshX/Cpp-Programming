#include<iostream>
using namespace std;
// it is a compile time polymorphism
class ComplexNumber{
    public:
        int imaginary;
        int real;
    
        ComplexNumber operator +(ComplexNumber &c1){ // operatorOverloading
            ComplexNumber c3;
            c3.imaginary = c1.imaginary + this->imaginary;
            c3.real = c1.real + this->real; // this operator points to a1 bcz a1 ne call lagaya hai + ko
            return c3;
        }
        // Operator Overloading with Friend function
        friend ComplexNumber operator - (ComplexNumber &c1, ComplexNumber &c2);
};
ComplexNumber operator - (ComplexNumber &c1, ComplexNumber &c2){ // operator overloading through friend function
    ComplexNumber c3;
    c3.imaginary = c1.imaginary - c2.imaginary;
    c3.real = c1.real - c2.real;
    return c3;
}
int main(){
    ComplexNumber a1,a2;
    a1.imaginary = 5;
    a1.real = 4;
    a2.imaginary = 6;
    a2.real = 8;
    ComplexNumber a3 = a1 + a2; // yaha pe jo object operator ke pahale hai uss ne call kiya hai function ko(i:e a1)
    cout<<a3.real<<endl; // and operator ke baad wala object parameter ke roop me send hua hai (i:e a2)
    cout<<a3.imaginary<<endl;
    ComplexNumber a4 = a1 - a2;
    cout<<a4.real<<endl;
    cout<<a4.imaginary<<endl;
}