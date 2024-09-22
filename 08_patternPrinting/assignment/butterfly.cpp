#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int a=2*n-3;
    int b=1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        for(int k=1;k<=a;k++){
            cout<<" ";
        }
        a-=2;
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2*n-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<'*';
        }
        for(int k=1;k<=b;k++){
            cout<<" ";
        }
        b+=2;
        for(int j=1;j<=n-i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}