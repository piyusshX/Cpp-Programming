#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"number is divisible by 5 or 3";
    }
    else {
        cout<<"number is not divisible by 5 or 3";
    }
}