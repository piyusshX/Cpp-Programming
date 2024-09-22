#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter 1st number : ";
    cin>>x;
    cout<<"enter 2nd number : ";
    cin>>y;
    cout<<"enter 3rd number : ";
    cin>>z;
    if(x>y && x>z){
        cout<<"Greatest Number is "<<x;
    }
      if(y>x && y>z){
        cout<<"Greatest Number is "<<y;
    }
      if(z>y && z>x){
        cout<<"Greatest Number is "<<z;
    }
   

}