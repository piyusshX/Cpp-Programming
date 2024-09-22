#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int a = 2*n-1;
    for(int i=1;i<=n-1;i++){
        cout<<'*';
        for(int j=1;j<=n-1;j++){
            
            if(i+j<=n) cout<<'*';
            else cout<<" ";
        }
        for(int k=1;k<=n-2;k++){
            if(k>=i-1) cout<<'*';
            else cout<<" ";
        }
        cout<<'*';
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            if(j==i || i+j==2*n || i>j || i+j>2*n) cout<<'*';
            else cout<<" ";
        }
        cout<<endl;
    }
}