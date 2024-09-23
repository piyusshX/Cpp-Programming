#include<iostream>
#include<string>
using namespace std;
class Anime{
    public:
        string name;
        int ep;
        float rating;

        // it is same as function overloading
        Anime (string n, int e, float r) : name(n), ep(e), rating(r){}
        Anime (string n, int e) : name(n), ep(e), rating(7.8){}

};

int main(){
    Anime JJK("Jujutsu Kaisen",48); // object creation -> Construstot ko call jayega
    Anime AOT("Attack On Titan",89,8.5);
    cout<<JJK.name<<endl;
    cout<<JJK.ep<<endl;
    cout<<JJK.rating<<endl;

    cout<<AOT.name<<endl;
    cout<<AOT.ep<<endl;
    cout<<AOT.rating<<endl;
    
}