#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
        cout<<"number is divisible by 5 and 3 both";
        }
        else { // n%5==0 but n%3!=0
        cout<<"number is not divisible by 5 and 3 both";
        }
    }
    
    else {
        cout<<"condiction not match";
    }
}