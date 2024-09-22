#include <iostream>
using namespace std;
int main(){
    // fibonacci = 1,1,2,3,5,8,13,21....
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a,b;
    // a=0,b=1;
    // int sum=1;
    // for(int i=1;i<=n-1;i++){
    //     sum = a + b;
    //     a=b;
    //     b=sum;
    // }
    // cout<<"fibonacci number : "<<sum;
    a=1,b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum = a + b;
        a=b;
        b=sum;
    }
    cout<<"fibonacci number : "<<b;
}