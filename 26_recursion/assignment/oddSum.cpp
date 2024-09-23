#include<iostream>
using namespace std;
int oddSum(int a, int b){
    if(a==b) return b;
    int sum = (a) + oddSum(a+2,b);
    return sum;
}
int main(){
    int a = 2;
    int b = 9;
    if(a%2==0) a = a+1;
    if(b%2==0) b = b-1;
    cout<<oddSum(a,b);
}