#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a; // last digit
    int r=0;
    // while(n>0){
    //     a=n%10;
    //     r+=a;
    //     n/=10;
    //     if(n!=0) r*=10;
    //     else break;
    // }
    // cout<<"reverse : "<<r;
    while(n>0){
        r*=10;
        a=n%10;
        r+=a;
        n/=10;
    }
    cout<<"reverse : "<<r;
}