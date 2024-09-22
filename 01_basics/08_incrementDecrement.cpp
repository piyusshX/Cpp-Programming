#include <iostream>
using namespace std;
int main(){
   // increment(++) and decrement(--) operators

   //increment
     cout<<"increment"<<endl;

    int x=5;
    cout<<x<<endl;
    cout<<++x<<endl; // ++x = x+1

   // ++x; //pre increment -> print hone ke pahale 1 add hona
    
    
    int y=7;
    cout<<y<<endl;
    cout<<y++<<endl; // y++ = y + 1


   // x++; //post increment -> print hone ke baad 1 add hona



   // pre and post decrement bhi same taerah work karte hai

    cout<<"decrement"<<endl;
    cout<<x<<endl;
    cout<<--x<<endl; // pre (--x = x - 1)
    cout<<y<<endl;
    cout<<y--<<endl; // post (y-- = y - 1)
}