#include<iostream>
using namespace std;
int fact(int n){
    // base case
    if(n==1 || n==0) return 1;
    // call and kaam
    int ans = n*fact(n-1); // as 5! = 5*4! -> n! = n*(n-1)!
    // return
    return ans; 
}
int main(){
    int n = 6;
    cout<<fact(n);
}