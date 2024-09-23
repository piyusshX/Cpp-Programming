#include<iostream>
#include<string>
using namespace std;
class A{ // Hierarchical Inheritance -> Single base class multiple derived class
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
class C : public A{ 
    public:         
        int c;
        C(){
            cout<<"C ka Constructor call hua"<<endl;
        }
};
int main(){
    C obj;  
    B obj2;
}