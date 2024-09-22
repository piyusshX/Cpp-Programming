#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter radius : ";
    cin>>r;
    float a,c;
    a = 3.14*r*r;
    c = 2*3.14*r;
    if(a>c) { 
        cout<<"area of circle is greater";
    }
    else if(a<c) cout<<"circumfearnce is greater";
    else cout<<"area = circumfearence";
}