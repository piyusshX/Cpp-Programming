#include <iostream>
using namespace std;
int main(){

  // difference between ascii values of two characters

     char x,y;
     cout<<"enter 1st character : ";
     cin>>x;
     cout<<"enter 2nd character : ";
     cin>>y;
     float z = (int)x-(int)y;
     cout<<"difference in ASCII Value : "<<z<<endl;
     if (z<0)
     {
        cout<<"ASCII Value of 2nd character is greater and which is "<<(int)y;
     }
     else {
        cout<<"ASCII Value of 1st character is greater and which is "<<(int)x;
     }
}