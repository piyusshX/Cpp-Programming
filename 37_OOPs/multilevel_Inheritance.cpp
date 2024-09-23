#include<iostream>
#include<string>
using namespace std;
class A{
    public:
        int a;
        int k;
        A(){
            cout<<"A ka Constructor call hua"<<endl;
        }
};
class B : public A{ 
    public: 
        int z;
        int j;
        B(){
            cout<<"B ka Constructor call hua"<<endl;
        }
};
class C : public B{ // here we have inherited the the properties of class B who have inherited
    public:         // its properties from class A and this is called multilevel inheritance.
        int c;
        C(){
            cout<<"C ka Constructor call hua"<<endl;
        }
};
int main(){
    C obj;  // in the output we can clearly see that A ka constructor sabse pahale call hua hai
            // and phir B ka nd last me C ka jabki hum ne C ka object banaya tha.
            // It's happened bcz C is inheriting the properties of B and B is inheriting the properties
            // of A -> So sabse pahale A ka ek object background me create hua and same cheez B ke sath hui.
}