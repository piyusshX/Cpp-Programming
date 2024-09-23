#include<iostream>
using namespace std;
int main(){
    // 1st matrix
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
    int r1,r2,c1,c2;
    cout<<"enter first coordinate (row,coloumn) : ";
    cin>>r1>>c1;
    cout<<"enter secound coordinate (row,coloumn) : ";
    cin>>r2>>c2;
    int sum=0;
    if(r1>r2){
        int temp = r1;
        r1=r2;
        r2=temp;
    }
    if(c1>c2){
        int temp = c1;
        c1=c2;
        c2=temp;
    }
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum += mat1[i][j];
        }
    }
    cout<<"sum : "<<sum;
}