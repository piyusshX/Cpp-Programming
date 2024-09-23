#include<iostream>
#include<string>
using namespace std;

    // Constructors are basically hidden functions that allocate memory when 
    // object is created/initilized. Ye Compiler ke pass by default ho hai and 
    // hum kud bhi isse create kar sakte hai. 
    // It is also very similar to function.

class Anime{
    public:
        string name;
        int ep;
        float rating;

        // Parameterized Constructor -> values initialization
        // we can also give default value if no value is given than default value will be given
        Anime (string name, int ep, float rating = 7.0){
            this->name = name;
            this->ep = ep;
            this->rating = rating;
        }

};

int main(){
    Anime JJK("Jujutsu Kaisen",48,8.3); // object creation -> Construstot ko call jayega
    Anime AOT("Attack On Titan",95,8.5);
    cout<<JJK.name<<endl;
    cout<<JJK.ep<<endl;
    cout<<JJK.rating<<endl;

    cout<<AOT.name<<endl;
    cout<<AOT.ep<<endl;
    cout<<AOT.rating<<endl;
    
}