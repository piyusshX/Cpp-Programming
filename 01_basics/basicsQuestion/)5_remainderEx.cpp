#include <iostream>
using namespace std;
int main (){
 /* take two integers a and b where a>b and find the remainder 
    when a is divided by b */

    int a = 7; // a is dividend
    int b = 3; // b is divisor
    int q = a/b; // q is quotioent
    int r;  // r is reminder
    // a = (b*q) - r
     r = a - (b*q);

    cout<<r<<endl;
    r = a%b;
    cout<<r<<endl; // modulus Operator gives us remainder of two numbers
}