#include<iostream>
#include<string>
using namespace std;

// we can also pass class objects through functions just like variable and 
// even return the objects but we have to store them in another object

class Player{ 
    private:
        // data members
        string name;
        int health;
        int kills;
    public:
        //setter 
        void setName(string n){
            name = n;
        }
        void setHealth(int h){
            health = h;
        }
        void setKill(int k){
            kills = k;
        }

        // getter 
        string getName(){
            return name;
        }
        int getHealth(){
            return health;
        }
        int getKill(){
            return kills;
        }
};

Player getKillMax(Player a, Player b){
    if(a.getKill()>b.getKill()) return a;
    else return b;
}

int main(){
    Player P1;
    P1.setName("BLaNK");
    P1.setHealth(55);
    P1.setKill(5);

    Player P2;
    P2.setName("Cyber");
    P2.setHealth(80);
    P2.setKill(4);
    
    // function call
    Player P3 = getKillMax(P1,P2);
    cout<<P3.getName()<<endl;
    cout<<P3.getKill()<<endl;
    cout<<P3.getHealth()<<endl;
    // as we can see P3 has get all the atributes of P1 bcz in the function P1 is return as the answer
    // and P3 is initialized with it
}