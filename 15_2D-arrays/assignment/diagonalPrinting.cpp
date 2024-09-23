#include<iostream>
using namespace std;
int main(){
    // 1st matrix
    int m;
    cout<<"enter order of square matrix : ";
    cin>>m;
    cout<<"enter elements : ";
    int mat1[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    //printing
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j==m-1)) cout<<mat1[i][j]<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
}