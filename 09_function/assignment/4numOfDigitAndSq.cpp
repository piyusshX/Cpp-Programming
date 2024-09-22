#include<iostream>
using namespace std;
int digit(int n){
    int a=0;
    for(int i=1;n>=1;i++){
        n/=10;
        a++;
    }
    return a;
}
int Square(int x){
    int sq = x*x;
    return sq;
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"Number of digits : "<<digit(n)<<endl;
    cout<<"Square of number of digits : "<<square(digit(n));
}