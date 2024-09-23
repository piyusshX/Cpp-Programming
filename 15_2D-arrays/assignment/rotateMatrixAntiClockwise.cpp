#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows : ";
    cin>>m;
    cout<<"enter coloumns : ";
    cin>>n;
    cout<<"enter elements : ";
    int mat1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }
    //making transpose of given matrix
    int trans[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trans[i][j]=mat1[j][i];
        }
    }
    // reverse printing the rows
    for(int i=n-1;i>=0;i--){ // in transpose matrix n -> rows & m -> column
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}