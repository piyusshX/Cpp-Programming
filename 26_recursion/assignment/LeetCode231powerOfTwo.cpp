#include<iostream>
using namespace std;
bool check(int n){
    if(n%2!=0) return false;
    if(n%2!=0) return false;
    if(n/2==1) return true;
    bool flag = check(n/2);
    return flag;
}
int main(){
    int n = 1;
    if(n==1) cout<<1;
    else cout<<check(n);
}