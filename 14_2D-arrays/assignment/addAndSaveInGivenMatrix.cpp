#include<iostream>
using namespace std;
int main(){
    // 1st matrix
    int m,n;
    cout<<"enter rows for 1st mat : ";
    cin>>m;
    cout<<"enter coloumns for 1st mat : ";
    cin>>n;
    cout<<"enter elements : ";
    int mat1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }
    // 2nd matrix
    int p,q;
    cout<<"enter rows for 2nd mat : ";
    cin>>p;
    cout<<"enter coloumns for 2nd mat : ";
    cin>>q;
    cout<<"enter elements : ";
    int mat2[p][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat2[i][j];
        }
    }
    if(m==p && n==q){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat1[i][j] += mat2[i][j];
                cout<<mat1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"matrix addition is not possible";
    }
}