#include<iostream>
using namespace std;
// Abstract Class is a class which contains Pure Virtual Function.
// Pure Virtual Function -> Base me declaration and Child me defination.
// When a class contains only Pure Virtual Function it's called Pure Abstract Class.

// Abstract Class ka use hum iss liye karte hai taki child class ke liye vo function banana 
// zadoori ho jaye, jiss se vo function koi ek child class me miss na hojaye. It's like interface 
// for other other child classes.

// Agar humne koi Pure Virtual Function abstract class me define kara hai and hum usse kisi child 
// class me define karna bhul gaye to vo class error degi (when you try to create it's object) jab 
// tak aap missing Pure Virtual Function create nhi karte. 

// Ex :- like agar hume ek function Mileage banana hai to vo har ek bike ya car ke liye alag 
// tarike se define hoga iss liye hum abstract class me Mileage name ka oure virtual function 
// bana dege jisse vo kisi other child class (bike or car) me miss na ho.

class Vehicle{ // Abstract Class
    public:
        int tyre;
    public:
        virtual void calculateMileage() = 0; // PureVirtual Function
        virtual void fuel() = 0; // PureVirtual Function
};
class Bike : public Vehicle{
    public:
        void calculateMileage(){
            cout<<"mileage ka function"<<endl;
        }
        void fuel(){
            cout<<"fuel type ka function"<<endl;
        }
};
int main(){
    Bike b;
}