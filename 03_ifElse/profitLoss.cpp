#include <iostream>
using namespace std;
int main(){
    float c,s;
    cout<<"enter the cost  price : ";
    cin>>c;
    cout<<"enter the selling price : ";
    cin>>s;
    float net = s-c;
    if(s>c){
        cout<<"PROFIT:)\n";
        cout<<"seller made profit of "<<net<<"rs";
    }
    if(s==c){
        cout<<"No PROFIT No LOSS";
    }
    if(s<c) {
        cout<<"LOSS:(\n";
        cout<<"seller suffer loss of "<<-net<<"rs";
    }
}