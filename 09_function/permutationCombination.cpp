#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=2;i<=x;i++){
        a*=i;
    }
    return a;
}
int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n,r;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter r : ";
    cin>>r;
    int ncr = combination(n,r);
    int npr = permutation(n,r);
    cout<<ncr<<endl<<npr;
}