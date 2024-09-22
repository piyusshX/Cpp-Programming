#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int mid = n/2 + 1;
    if(n%2!=0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==mid || j==mid) cout<<'*';
                else cout<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"invalid input";
    // if(n%2!=0){
    //     for(int i=1;i<=n;i++){
    //         for(int j=1;j<=n;j++){
    //             if(i==n/2+1){
    //                 for(int k=1;k<=n;k++){
    //                     cout<<'*';
    //                 }
    //                 break;
    //             }
    //             else if(j==n/2+1) cout<<'*';
    //             else cout<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // else cout<<"invalid input";
}