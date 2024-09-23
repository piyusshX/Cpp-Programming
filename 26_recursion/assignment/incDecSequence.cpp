#include<iostream>
using namespace std;
void incDecSeq(int i, int n){
    if(i==n){ // base case
        cout<<n<<" ";
        return;
    }
    cout<<i<<" ";
    incDecSeq(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n = 5;
    incDecSeq(1,n);
}