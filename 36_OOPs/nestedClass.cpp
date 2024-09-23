#include<iostream>
#include<string>
using namespace std;
class Weapon{
    public:
        string name;
        int damage;
        int ammo;      
};
class Player{ 
    private:
    class Vest{
        int hp;
        int lvl;
        public:
            void setHp(int health){
                this->hp = health;
            }
            void setLvL(int level){
                this->lvl = level;
            }
            int getHp(){
                return hp;
            }
            int getLvL(){
                return lvl;
            }
    };
        // data members
        string name;
        int health;
        int kills;
        Weapon gun;
        Vest vest;
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
        Weapon setGun(Weapon gun){
            this->gun = gun;
        }
        void setVest(int level){
            Vest *vest = new Vest;
            vest->setLvL(level);
            int health = 0;
            if(level == 1)  health = 30;
            else health = 45;
            vest->setHp(health);
            this->vest = *vest;
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
        Weapon getGun(){
            return gun;
        }
        void getVest(){
            cout<<vest.getHp()<<endl;
            cout<<vest.getLvL()<<endl;
        }
};
int main(){
    Weapon akm;
    akm.name = "AKM";
    akm.damage = 45;
    akm.ammo = 30;
    
    Weapon m4;
    m4.name = "M416";
    m4.damage = 35;
    m4.ammo = 30;

    Player P1;
    P1.setName("BLaNK");
    P1.setHealth(55);
    P1.setKill(5);
    P1.setGun(akm);
    P1.setVest(1);

    Player P2;
    P2.setName("Cyber");
    P2.setHealth(80);
    P2.setKill(4);
    P2.setGun(m4);
    P2.setVest(2);

    Weapon g1 = P1.getGun();
    cout<<g1.name<<endl;
    P1.getVest();
}