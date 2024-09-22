#include <iostream>
using namespace std;
int main(){
    int amt;
    cout<<"enter the amount : ";
    cin>>amt;

    int n1,n2,n5,n10;
    n1=n2=n5=n10=0;

    if(amt>=10){
        n10 = amt/10;
        amt -= n10*10;
    }
    if(amt>=5){
        n5 = amt/5;
        amt -= n5*5;
    }
    if(amt>=2){
        n2 = amt/2;
        amt -= n2*2;
    }
    if(amt>=1){
        n1 = amt/1;
        amt -= n1*1;
    }
    cout<<"number of 10rs notes : "<<n10<<endl;
    cout<<"number of 5rs notes : "<<n5<<endl;
    cout<<"number of 2rs notes : "<<n2<<endl;
    cout<<"number of 1rs notes : "<<n1<<endl;

}