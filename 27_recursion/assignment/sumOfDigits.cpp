#include<iostream>
using namespace std;
void sumOfDigits(int n, int sum){
    if(n==0) {
        cout<<sum;
        return ;
    }
    sumOfDigits(n/10,sum+(n%10));
}
int sum(int n){
    if(n==0) return 0;
    return n%10 + sum(n/10);
}
int main(){
    int n = 1236;
    sumOfDigits(n,0);
}