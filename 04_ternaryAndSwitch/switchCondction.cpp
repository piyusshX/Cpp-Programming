#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter month number : ";
    cin>>x; 
    // 1,3,5,7,8,10,12 -> 31days
    // 4,6,9,11 -> 30days
    // 2 -> 28days
    switch((x<=7) && (x%2!=0)){
        case 1:
         cout<<"31days";
    }
    switch(x==8 || x==10 || x==12){
        case 1:
         cout<<"31days";
    }
    switch(x==6 || x==4 || x==9 || x==11){
        case 1:
         cout<<"30days";
    }
    switch(x){
        case 2:
         cout<<"28days";
    }
}