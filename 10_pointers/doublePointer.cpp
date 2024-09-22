#include<iostream>
using namespace std;
int main(){
    int x =5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl; // address of x
    cout<<p<<endl;  // address of ptr
    cout<<endl;

    cout<<x<<endl;
    cout<<*ptr<<endl;   
    cout<<**p<<endl;  // value of x
    cout<<endl;

    cout<<&x<<endl; // address of x
    cout<<ptr<<endl;   // address of x
    cout<<*p<<endl;  // value of ptr which is address of x
    cout<<endl;
}