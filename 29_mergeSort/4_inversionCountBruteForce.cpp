#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {0,4,6,2,5,7,5}; // (4,2) ,(6,2) , (6,5) , (6,5) , (7,5)  -> 5
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    cout<<count;
}