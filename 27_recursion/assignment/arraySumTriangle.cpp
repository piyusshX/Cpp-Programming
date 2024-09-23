#include<iostream>
#include<vector>
using namespace std;
void sumTriangle(int arr[], int n){
    if(n==0) return;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans[n-1];
    for(int i=0;i<n-1;i++){
        ans[i] = arr[i] + arr[i+1];
    }
    sumTriangle(ans,n-1);
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sumTriangle(arr,n);
}