#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
        string companyName;
        int enginePower;
        int tyerSize;
        Vehicle (){
            cout<<"Vehicle ka Constructor call hua"<<endl;
        }
    public:
        void getName(){
            cout<<companyName<<endl;
        }
};
class Bike : public Vehicle{ // with the help of inheritance we have inherited the properties of Vehicle class
    public: 
        int handleSize;
        Bike(){
            cout<<"Bike ka Constructor call hua"<<endl;
        }
};
int main(){
    Bike BMW;
    BMW.companyName = "BMW"; // we didn't even define this in our BIKE class but with the help of inheritance
    BMW.getName();          // we are able to use them
}