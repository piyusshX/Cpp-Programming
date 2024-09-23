#include<iostream>
using namespace std;
int powLog(int a, int b){
    if(b==1) return a;
    if(b==0) return 1;
    int ans = powLog(a,b/2);
    if(b%2!=0) return ans*ans*a; // if we have odd power
    return ans*ans;
}
int main(){
    int a = 2; // base
    int b = 0; // exponent
    cout<<powLog(a,b);
}