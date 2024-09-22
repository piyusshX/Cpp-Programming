#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int m = n-1;
    for(int i=1;i<=2*n-1;i++){
        cout<<'*';
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<'*';
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(int l=1;l<=m+1-i;l++){
            cout<<'*';
        }
        cout<<endl;
    }
}