#include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return  stair(n-1) + stair(n-2);
}
int main(){
    int n = 5; // only 1 step and 2 step at a time is allowed
    cout<<stair(n);
}