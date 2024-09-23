#include<iostream>
#include<string>
using namespace std;
class Player{ // bluePrint -> memory allocate nhi hui hai iss ko
    public:
        // data members
        string name;
        int health;
        int kills;
    public:
        // member functions
        void showName(){
            cout<<"Player Name : "<<name<<endl;
        }
        void showHealth(){
            cout<<"Health : "<<health<<endl;
        }
        void showKills(){
            cout<<"Kills : "<<kills<<endl;
        }
};
int main(){
    Player P1;
    P1.name = "Piyush";
    P1.health = 80;
    P1.kills = 4;
    P1.showName();
    P1.showHealth();
    P1.showKills();
}