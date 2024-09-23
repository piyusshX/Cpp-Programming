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

        // Default Constructor
        Anime (){
            cout<<"Constructor ko call lagi"<<endl;
        }

};

int main(){
    Anime JJK; // object creation -> Construstot ko call jayega
    Anime AOT;
}
