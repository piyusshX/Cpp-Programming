#include <iostream>
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
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" "; // iCj
        }
        cout<<endl;
    }
}