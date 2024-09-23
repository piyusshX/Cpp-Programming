#include<iostream>
using namespace std;
int main(){
    // 1st matrix
    int m;
    cout<<"enter order of square matrix (must be odd) : ";
    cin>>m;
    if(m%2==0) cout<<"invalid input please enter odd value";
    else{
        cout<<"enter elements : ";
        int mat[m][m];
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        // printing
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if((i==m/2) || (j==m/2)) cout<<mat[i][j]<<" ";
                else cout<<" "<<" ";
            }
            cout<<endl;
        }
    }
}