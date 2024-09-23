#include<iostream>
using namespace std;
int main(){
    int m,n; // m -> no of rows and n -> no of coloumns
    cout<<"enter no of rows (m) : ";
    cin>>m;
    cout<<"enter no of coloumns (n) : ";
    cin>>n;
    int arr[m][n];
    cout<<"enter elements of m X n array : ";
    //input
    for(int i=0;i<m;i++){ // i -> row
        for(int j=0;j<n;j++){ // j -> coloumn
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}