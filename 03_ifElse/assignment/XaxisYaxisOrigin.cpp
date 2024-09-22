#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter value of x : ";
    cin>>x;
    cout<<"enter value of y : ";
    cin>>y;
    if(x==0 && y==0) cout<<"point lies on origin";
    else if(y==0) cout<<"point is on x axis";
    else if(x==0) cout<<"point is on y axis";
    else cout<<"point lies somewhere else";
    
}