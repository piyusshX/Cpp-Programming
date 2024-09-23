#include<iostream>
using namespace std;
int sum(int n){ // without extra parameter
    if(n==0) return 0; // base case
    int sm = n + sum(n-1);  // call
    return sm;
}
void sum2(int sum, int n){ // with extra parameter
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum2(sum+n,n-1);
}
int main(){
    int n = 6;
    cout<<sum(n);
    cout<<endl;
    sum2(0,n);
}