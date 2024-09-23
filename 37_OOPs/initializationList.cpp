#include<iostream>
#include<string>
using namespace std;
class Anime{
    public:
        string name;
        int ep;
        float rating;

        // simple words me Initilization List code ko chota karne ke liye use hoti hai

        //hum simple parameter ki values ko short me initilize kardete hai iss ki help se
        Anime (string n, int e, float r) : name(n), ep(e), rating(r) {
            
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