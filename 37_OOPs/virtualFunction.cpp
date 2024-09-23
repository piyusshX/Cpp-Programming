#include<iostream>
using namespace std;
// Firstly Go to functionOverriding.cpp understand it and then continue on this one!!

// Virtual function make sure that the correct function is called for an object, regardless of the
// pointer used for calling it. Ye jiss bhi function ke aage lagta hai uski vo runtime binding karwa deta hai.

class base{
    public:
        int a;
    public:
        virtual void show(){ // runTime Binding
            cout<<"base ka show"<<endl;
        }
        void get(){
            cout<<"pointer can only access base class ki properties"<<endl;
        }
};
class derived : public base{
    public:
        int b;
    public:
        void show(){
            cout<<"derived ka show"<<endl;
        }
        void test(){
            cout<<"hey!!"<<endl;
        }
};
int main(){
    // compiler POV - base type ka hai
    // Compile time binding 
    // runTime binding - virtual function 
    // runTime POV - derived ka address hai
    base *ptr;    
    ptr = new derived; 
    ptr->show(); 
    ptr = new base;  
    ptr->show(); 
    
}