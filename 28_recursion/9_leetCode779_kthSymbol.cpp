#include<iostream>
using namespace std;
int kthSymbol(int n, int k) {
    if(n==0) return 0;
    if(k%2==0) { // Even -> Flip
        int ans = kthSymbol(n-1,k/2);
        if(ans==0) return 1;
        else return 0;
    }
    else return kthSymbol(n-1,(k/2)+1); // Odd -> Same
}
int main(){
    int n = 3;
    int k = 6;
    cout<<kthSymbol(n,k);
}