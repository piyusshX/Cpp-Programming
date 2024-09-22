#include<iostream>
using namespace std;
int hcf(int a, int b){
    int hcf=1;
    // for(int i=1;i<=min(a,b);i++){      // not optimized
    //     if(a%i==0 && b%i==0){
    //         hcf = i;
    //     }
    // }
    for(int i=min(a,b);i>=1;i--){ // optimized
        if(a%i==0 && b%i==0){
         hcf = i;
         break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"enter 2nd number : ";
    cin>>b;
    cout<<hcf(a,b);
}