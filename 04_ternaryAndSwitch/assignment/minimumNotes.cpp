#include <iostream>
using namespace std;
int main(){
    int amt;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=0;
    cout<<"enter the amount : ";
    cin>>amt;

    switch(amt >= 500){
        case 1:
        n500 = amt/500;
        amt -= (500*n500);
      break;
    }
    switch(amt >= 200){
        case 1:
        n200 = amt/200;
        amt -= (200*n200);
      break;
    }
    switch(amt >= 100){
        case 1:
        n100 = amt/100;
        amt -= (100*n100);
      break;
    }
    switch(amt >= 50){
        case 1:
        n50 = amt/50;
        amt -= (50*n50);
      break;
    }
    switch(amt >= 20){
        case 1:
        n20 = amt/20;
        amt -= (20*n20);
      break;
    }
    switch(amt >= 10){
        case 1:
        n10 = amt/10;
        amt -= (10*n10);
      break;
    }
    switch(amt >= 5){
        case 1:
        n5 = amt/5;
        amt -= (5*n5);
      break;
    }
    switch(amt >= 2){
        case 1:
        n2 = amt/2;
        amt -= (2*n2);
      break;
    }
    switch(amt >= 1){
        case 1:
        n1 = amt/1;
      break;
    }
    cout<<"number of 500rs notes : "<<n500<<endl;
    cout<<"number of 200rs notes : "<<n200<<endl;
    cout<<"number of 100rs notes : "<<n100<<endl;
    cout<<"number of 50rs notes : "<<n50<<endl;
    cout<<"number of 20rs notes : "<<n20<<endl;
    cout<<"number of 10rs notes : "<<n10<<endl;
    cout<<"number of 5rs notes : "<<n5<<endl;
    cout<<"number of 2rs notes : "<<n2<<endl;
    cout<<"number of 1rs notes : "<<n1<<endl;
    cout<<"minimum number of notes required is "<<n1+n2+n5+n10+n20+n50+n100+n200+n500;
}