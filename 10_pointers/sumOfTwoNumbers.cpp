#include <iostream>
using namespace std;
int main(){
    // int a,b;
    // cin>>a>>b;
    // int* p1 = &a;
    // int* p2 = &b;
    // cout<<*p1 + *p2;

    int x,y;
    int* ptr1 = &x;
    int* ptr2 = &y;
    cout<<"enter 1st number : ";
    cin>>*ptr1;
    cout<<"enter 2nd number : ";
    cin>>*ptr2;
    cout<<*ptr1 + *ptr2;
}