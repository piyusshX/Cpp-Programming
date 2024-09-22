#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a=n;
    int count=0;
    // while(n/=10){
    //     count++;
    // }
    // cout<<"number of digits : "<<count+1;

    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<"number of digits : 1";
    else cout<<"number of digits : "<<count;
}