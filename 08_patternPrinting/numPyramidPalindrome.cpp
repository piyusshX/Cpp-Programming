#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    // int nsp = n-1;
    // int nst = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nsp;j++) cout<<" ";
    //     nsp--;
    //     int b=1;
    //     for(int k=1;k<=nst;k++){
    //         int a=k;
    //         if(k<=i) cout<<a;
    //         else {
    //             a = a-(2*b);
    //             cout<<a;
    //             b++;
    //         }
    //     }
    //     nst+=2;
    //     cout<<endl;
    // }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){ 
                cout<<" ";
            }
            for(int k=1;k<=i;k++){ 
                cout<<k;
            }
            for(int l=i-1;l>=1;l--){ 
                cout<<l;
            }
            cout<<endl;
    }
}