#include<iostream>
using namespace std;
int main(){
    int x = 34;
    int* ptr = &x;  // * -> derefrence Operator
    cout<<*ptr<<endl; // ptr ke ander jo address ha vaha jao and jo bhi value hai vo print kardo

    cout<<x<<endl;
    *ptr = 4; // we can update the value of x without using it
    cout<<x; 
}