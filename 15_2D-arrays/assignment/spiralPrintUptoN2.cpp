#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter order : ";
    cin>>m;
    int mat[m][m];
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=m-1;
    int num=1;
    while(maxr>=minr && maxc>=minc){
        for(int j=minc;j<=maxc;j++){ // for right 
            mat[minr][j]=num;
            num++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){ // for down
            mat[i][maxc]=num;
            num++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc;j>=minc;j--){ // for left 
            mat[maxr][j]=num;
            num++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){ // for up
            mat[i][minc]=num;
            num++;
        }
        minc++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}