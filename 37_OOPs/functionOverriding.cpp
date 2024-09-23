#include<iostream>
using namespace std;
// Defination :- When a function of base class is redefined in it's derived class, it's called Function Overriding.
// Function Overriding -> Runtime pe hota hai

    // With the help of function overriding we can redefine a function in the 
    // derived class that is already exist in the base class.
    // And jo base class ka function hota hai vo bhi derived class ke pass hota hai
    // and we can use it with the help of Scope Resolution Operator(::) and Pointer.
class base{
    public:
        int a;
    public:
        void show(){
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
    derived obj;
    obj.show(); 
    obj.base::show(); // here we can see derived class also has show funtion of base class

// C++ me Inheritance pointers ko ek power deta hai jiss se parent class ka pointer 
// child class ka bhi address store kar sakta hai. But pointer child class ke functions 
// and attributes ko access nhi kar sakta, Pointer sirf parent class ki properties ko access
// kar sakta hai. Bcz Pointer ka type parent class ka type hai.

    base *ptr;    
    ptr = &obj;  
    ptr->show(); 
    
// But yaha pe pointer kud ko contradict kar raha hai kyoki pointer save kar raha hai address derived class
// ka and call laga raha hai base class ke function ko.
// Iss problem ko solve hum Virtual Function se kar sakte hai. jiss se pointer uss class ka function hi call 
// kare jiss ka address uss ke pass store hai.

// Go to virtualFunction.cpp
}