#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int m = n-1;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=m+1-i;j++){
    //         cout<<j;
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<" ";
    //     }
    //     int a=n+i;
    //     for(int l=1;l<=m+1-i;l++){
    //         cout<<a;
    //         a++;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(int l=1;l<=m+1-i;l++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}