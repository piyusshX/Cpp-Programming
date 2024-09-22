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

 if(x>y){
         if(x>z){
                cout<<"Greatest Number is "<<x;
            }
            else{  // x>y and z>x -> z>x>y
                cout<<"Greatest Number is "<<z;
            }
        }
else{
    if(y>z){
        cout<<"Greatest Number is "<<y;
    }
    else{
        cout<<"Greatest Number is "<<z;
    }
}


 /*   if(x>y){
        if(x>z){
           cout<<"Greatest Number is "<<x;
        }
    }
    if(y>x){
        if(y>z){
           cout<<"Greatest Number is "<<y;
        }
    }
    if(z>y){
        if(z>x){
           cout<<"Greatest Number is "<<z;
        }
    }
*/

}