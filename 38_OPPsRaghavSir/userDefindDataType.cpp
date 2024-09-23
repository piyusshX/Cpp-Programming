#include<iostream>
using namespace std;
int main(){ // we can also define a class in main the main function
    class Student{
    public:
        string name;
        int roll;
        float cgp;
    };
    Student s1;
    s1.name = "piyush";
    s1.roll = 43;
    s1.cgp = 6.4;
    cout<<s1.name<<" "<<s1.roll<<" "<<s1.cgp<<endl;

    Student s2 = {"Priyanshu", 49, 6.3};            // you can also initialize argument like this 
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.cgp<<endl; // but you have to follow right sequence
}