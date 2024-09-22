#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<" ";
    }
    cout<<1;
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<" ";
        }
        cout<<i+1;
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        cout<<i+1;
        cout<<endl;
    }
}