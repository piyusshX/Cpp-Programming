#include<iostream>
using namespace std;
void cycleSort(int arr[], int n){
    int i = 0;
    while( i < n ){
        int correctIdx = arr[i] - 1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
}
int main(){
    int arr[] = {2,3,1,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    cycleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}