#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    // no of star = n-i+1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}