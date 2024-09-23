#include<iostream>
using namespace std;
void isPossible(int arr[], int n){
    for(int i=1;i<n;i++){ // prefix Sum
        arr[i] = arr[i] + arr[i-1];
    }
    // Checking if Partition is Possible or Not
    int idx = -1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx = i;
            break;
        }
    }
    if(idx!=-1) cout<<"Yes!! given array can be Partitioned after "<<idx;
    else cout<<"No!! given array can not be partitioned";
}
int main(){
    int arr[] = {1,2,3,4,5,3,7,2,3}; // {1,2,3,4,5} -> 15 , {3,7,2,3} -> 15
    int n = sizeof(arr)/sizeof(arr[0]);
    isPossible(arr,n);
}