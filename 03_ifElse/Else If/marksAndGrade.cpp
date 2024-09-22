#include <iostream>
using namespace std;
int main(){
    int n;  

    // above (100 to 80 excillent, 80 to 60 good, 60 to 40 poor) below 40 fail 

    cout<<"enter your marks : ";
    cin>>n;
    
/*     if(n>=80 && n<=100){
        cout<<"excillent";
    }
    if(n>=60 && n<=80){
        cout<<"good";
    }
    if(n>=40 && n<=60){
        cout<<"poor";
    }
    if(n<40){
        cout<<"fail";
    } */

/*     if(n<=100){
        if(n>=80){
            cout<<"excillent";
        }
        else{
            if(n>=60){
                cout<<"good";
            }
            else{
                if(n>=40){
                cout<<"poor";
            }
                else {
                    cout<<"fail";
                }
            }
            
        }
    } */

    if(n>=80){
        cout<<"excillent";
    }
    else if(n>=60){
        cout<<"good";
    }
    else if(n>=40){
        cout<<"poor";
    }
    else{
        cout<<"fail";
    }

}