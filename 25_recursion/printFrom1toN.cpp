#include<iostream>
using namespace std;
void printExtra(int i, int n){ // with extra parameter
    if(i>n) return; // base case
    cout<<i<<endl;
    printExtra(i+1,n); // call
}
void printWithoutExtra(int n){ // without extra parameter
    if(n==0) return;
    printWithoutExtra(n-1);
    cout<<n<<endl;
}
int main(){
    int n = 6;
    printExtra(1,n);
    cout<<endl;
    printWithoutExtra(n);
}