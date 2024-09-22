#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Number of Rows : ";
    cin>>r;
    cout<<"Enter Number of Coloumns : ";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}