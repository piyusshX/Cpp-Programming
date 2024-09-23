#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows : ";
    cin>>m;
    cout<<"enter coloumns : ";
    cin>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = 10;
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}