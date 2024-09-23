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
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int sum = 0;
    int preSum;
    int count=0;
    for(int i=0;i<m;i++){
        preSum = sum;
        sum = 0;
        for(int j=0;j<n;j++){
            sum += mat[i][j];
        }
        if(sum>preSum) count = i+1;
    }
    cout<<count;
}