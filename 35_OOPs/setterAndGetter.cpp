#include<iostream>
#include<string>
using namespace std;
class Player{ 
    private:
        // data members
        string name;
        int health;
        int kills;
    public:
        //setter -> used to set the values of private data members for security purpose
        void setName(string n){
            name = n;
        }
        void setHealth(int h){
            health = h;
        }
        void setKill(int k){
            kills = k;
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