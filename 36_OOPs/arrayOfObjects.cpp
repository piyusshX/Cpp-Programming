#include<iostream>
#include<string>
using namespace std;
class Anime{ // bluePrint -> memory allocate nhi hui hai iss ko
private:
        string name;
        int ep;
        string genre;
        float rating;
public:
        Anime(string name, string genre, int ep, float rating){
            this->name = name;
            this->genre = genre;
            this->ep = ep;
            this->rating = rating;
        }
        void printName(){
            cout<<name;
        }
        void printGenre(){
            cout<<genre;
        }
        void printEp(){
            cout<<ep;
        }
        void printRating(){
            cout<<rating;
        }
        void details(){
            cout<<"Name : "<<name<<endl;
            cout<<"Genre : "<<genre<<endl;
            cout<<"Rating : "<<rating<<endl;
            cout<<"Episode : "<<ep<<endl;
        }
};
int main(){
    Anime jjk("Jujutsu Kaisen", "Action, Dark Fantasy, Shounen", 47, 8.3);
    Anime ems("Eminence in Shadow", "Action, Isekai, Fantasy, Reincarnation", 30, 8.0);
    Anime fwars("FoodWars", "Gourmet, Ecchi, Shounen", 86, 8.4);
    Anime mlf("Tsukimichi MoonLight Fantasy", "Action, Isekai, Fantasy, ", 36, 7.6);
    Anime aot("WorldEnd", "Romance, Fantasy, Shounen", 12, 7.5);
    
    Anime fav[5] = {jjk,ems,mlf,fwars,aot};
    for(int i=0;i<5;i++){
        fav[i].details();
        cout<<endl;
    }
}