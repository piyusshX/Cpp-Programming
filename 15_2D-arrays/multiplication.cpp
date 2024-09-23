#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows for 1st matrix : ";
    cin>>m;
    int n;
    cout<<"enter no of coloumns for 1st matrix : ";
    cin>>n;
    int p;
    cout<<"enter no of rows for 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"enter no of coloumns for 2nd matrix : ";
    cin>>q;
    
    if(n==p){
        int mat1[m][n];
        cout<<"enter elements of 1st matrix :";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>mat1[i][j];
            }
        }
        int mat2[p][q];
        cout<<"enter elements of 2nd matrix :";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>mat2[i][j];
            }
        }
        //resultent matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j] += mat1[i][k]*mat2[k][j];
                }
            }
        }
        // printing
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else {
        cout<<"matrix multiplication is not possible";
    }
}