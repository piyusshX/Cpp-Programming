#include<iostream>
using namespace std;
void subArray(int arr[], int n){
    for(int i=0;i<n;i++){ // start of subArray
        for(int j=n-1;j>=i;j--){ // end of subArray
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
void subArray2(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    subArray2(arr,n);
}
