#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //for spaces
        for(int j=1;j<=n-i;j++) cout<<" ";

        //for alphabets
        for(int k=1;k<=i;k++) cout<<(char)(k+64);

        cout<<endl;
    }
} //if else wali method work nhi karegi