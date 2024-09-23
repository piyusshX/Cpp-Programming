#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    float cgp;
    Student(){
        // Agar hum koi constructor banate hai to hume ek defalut constructor dena padta hai kyoki
        // phir computer default constructor phir nhi banata hai.
        // On the other hand agar humne koi bhi construtor nhi banaya to computer automatically 
        // background me defalut constructor bana deta hai. 
    }
    Student(string name, int roll, float cgp){
        this->name = name;
        this->roll = roll;
        this->cgp = cgp;
    }
public:
    void printStudent(){
        cout<<"Student Name : "<<name<<endl;
        cout<<"Roll No : "<<roll<<endl;
        cout<<"CGPA : "<<cgp<<endl;
    }
};
int main(){
    Student s1("Mayank",36,7.6);
    // s1.printStudent();
    Student s2("Dhawal",16,7.5);
    Student s3("Rajveer",50,7.4);
    Student s4("Piyush",43,6.4);
    Student s5("Priyanshu",49,6.3);

    Student arr[5] = {s1,s2,s3,s4,s5};
    // printing the details
    for(int i=0;i<5;i++){
        arr[i].printStudent();
    }
}