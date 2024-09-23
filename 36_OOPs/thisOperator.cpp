#include<iostream>
#include<string>
using namespace std;

// this operator is used for differentiate b/w two variable with same name
// it is used as     this->varName
// this-> ye batata ha ki ye variable iss class ka hai

class Player{ 
    private:
        // data members
        string name;
        int health;
        int kills;
    public:
        //setter 
        void setName(string name){
            this->name = name;
        }
        void setHealth(int health){
            this->health = health;
        }
        void setKill(int kills){
            this->kills = kills;
        }

        // getter -> get the values of private data members
        void getName(){
            cout<<name<<endl;
        }
        void getHealth(){
            cout<<health<<endl;
        }
        void getKill(){
            cout<<kills<<endl;
        }
};
int main(){
    Player P1;
    // setting the values
    P1.setName("Piyush");
    P1.setHealth(55);
    P1.setKill(5);
    // getting the outputs
    P1.getName();
    P1.getHealth();
    P1.getKill();
}