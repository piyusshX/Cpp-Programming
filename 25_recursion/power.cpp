#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    int p = a*power(a,b-1);
    return p;
}
int main(){
    int a = 0; // base
    int b = 0; // exponent 
    cout<<power(a,b);
}