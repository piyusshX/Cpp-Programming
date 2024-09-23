#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows for 1st matrix : ";
    cin>>m;
    int n;
    cout<<"enter no of coloumns for 1st matrix : ";
    cin>>n;
    int mat[m][n];
    cout<<"enter elements of 1st matrix :";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
    // spiral printing
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(maxr>=minr && maxc>=minc){
        for(int j=minc;j<=maxc;j++){ // for right 
            cout<<mat[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){ // for down
            cout<<mat[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc;j>=minc;j--){ // for left 
            cout<<mat[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){ // for up
            cout<<mat[i][minc]<<" ";
        }
        minc++;
    }
}