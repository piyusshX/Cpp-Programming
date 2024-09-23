#include<iostream>
using namespace std;
int main(){
    int m; // m -> no of rows and coloumn
    cout<<"enter order of square matrix : ";
    cin>>m;
    int arr[m][m];
    cout<<"enter elements : ";
    //input
    for(int i=0;i<m;i++){ // i -> row
        for(int j=0;j<m;j++){ // j -> coloumn
            cin>>arr[i][j];
        }
    }  
    //transpose in a same matrix
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            // swaping i,j -> j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<m;i++){ // i -> row
        for(int j=0;j<m;j++){ // j -> coloumn
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
}