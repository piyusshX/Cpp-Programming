#include<iostream>
#include<string>
using namespace std;

//  jab hum kisi bhi variable ya object ko declare karte hai to compiler unko pahale hi ram me 
//  memory allowcate kar deta hai and usse hum "STATIC MEMORY ALLOCATION" or "STACK MEMORY" kahate hai
 
//  "STATIC MEMORY ALLOCATION" -> Compile time pe hoti hai

//  but jab runtime pe memory allowcate ho to usse "DYNAMIC MEMORY ALLOCATION" or "HEEP MEMORY" kahate hai
//  "DYNAMIC MEMORY ALLOCATION" hum Pointer ki help se achive karte hai

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
int main(){
    Player P1; // static allocation
    P1.setName("BLaNK");
    P1.setHealth(55);
    P1.setKill(5);

    Player P2; // static allocation
    P2.setName("Cyber");
    P2.setHealth(80);
    P2.setKill(4);
    
    Player *P3 = new Player; // (new) keyword Dynamially or Runtime pe hi objects create karta jayega
    (*P3).setName("PerCY"); // we can access new objs by (*obj) and also with arrow -> in pace of dot
    P3->setKill(6);
    P3->setHealth(99);

    cout<<P3->getName()<<endl;
    cout<<P3->getKill()<<endl;
    cout<<P3->getHealth()<<endl;

}