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
class B{ 
    public: 
        int z;
        int j;
        B(){
            cout<<"B ka Constructor call hua"<<endl;
        }
};
class C : public B, public A{ // here we have inherited the the properties of class B as well as A
    public:                   // but A and B ek dusre se related nhi hai and this is called Multiple Inheritance.
        int c;
        C(){
            cout<<"C ka Constructor call hua"<<endl;
        }
};
int main(){
    C obj;  // in the output we can clearly see that B ka constructor pahale call hua hai
            // and phir A ka and last me C ka kyo ki C ne B ko pahale inherit kiya ha A se.
}