#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++) cout<<" ";
    //     for(int k=1;k<=2*i-1;k++) cout<<'*';
    //     cout<<endl;
    // }

    int nst = 1;       // no of star
    int nsp = n-1;     // no of space

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++) cout<<" "; //spaces
            nsp = nsp - 1;
        for(int k=1;k<=nst;k++) cout<<'*'; //stars
            nst = nst + 2;
        cout<<endl;
    }
}