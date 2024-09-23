#include<iostream>
using namespace std;
class Anime{
public:
    string name;
    int ep;
};
void change(Anime &a){
    a.name = "jjk";
    a.ep = 48;
}
void change2(Anime* a){
    a->name = "Death Note"; // (*a).name = a->name
    a->ep = 35;
}
int main(){
    Anime AOT;
    AOT.name = "Attack On Titan";
    AOT.ep = 90;
    cout<<AOT.name<<" "<<AOT.ep<<endl;
    change(AOT);
    cout<<AOT.name<<" "<<AOT.ep<<endl;
    change2(&AOT);
    cout<<AOT.name<<" "<<AOT.ep<<endl;
}