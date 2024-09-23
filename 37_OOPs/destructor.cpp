#include<iostream>
#include<string>
using namespace std;

    // Destructors are basically hidden functions that deallocate memory when 
    // object goes out of it's scope. 

    // In the following example jo 1st destructor ko call lagi hai vo TDG ki wajah
    // se lagi hai kyo ki uss ka scope if() ka bracket tha and next two calls 
    // JJK and AOT ki wajh se kyo ki unka scope main() ka bracket tha

class Anime{
    public:
        string name;
        int ep;
        float rating;

        // Destructor
        ~Anime (){
            cout<<"Destructor ko call lagi"<<endl;
        }
    public: 
        void getName(){
            cout<<name<<endl;
        }
};

int main(){
    Anime JJK;  // only have scope in main() braket
    Anime AOT;
    JJK.name = "Jujutsu Kaisen";
    bool flag = true;
    if(flag == true){
        Anime TDG; // only have scope in if() wala braket
    }
    
    JJK.getName();

}
