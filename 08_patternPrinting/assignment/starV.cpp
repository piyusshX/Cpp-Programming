#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    int a = 2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            if(j==i || i+j==2*n) cout<<'*';
            else cout<<" ";
        }
        cout<<endl;
    }
}