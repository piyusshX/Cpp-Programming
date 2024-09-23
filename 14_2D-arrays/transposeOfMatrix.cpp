#include<iostream>
using namespace std;
int main(){
    int m,n; // m -> no of rows and n -> no of coloumns
    cout<<"enter no of rows (m) : ";
    cin>>m;
    cout<<"enter no of coloumns (n) : ";
    cin>>n;
    int arr[m][n];
    cout<<"enter elements : ";
    //input
    for(int i=0;i<m;i++){ // i -> row
        for(int j=0;j<n;j++){ // j -> coloumn
            cin>>arr[i][j];
        }
    }   
    // // print transpose
    // for(int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    
    //transpose of matrix with another array
    int trans[n][m]; // for transpose of matrix swap the m and n
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trans[j][i] = arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}