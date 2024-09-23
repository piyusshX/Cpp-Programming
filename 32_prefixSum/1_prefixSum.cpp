#include<iostream>
#include<vector>
using namespace std;
vector<int> prefixSum(int arr[], int n){ // With Extra Array
    vector<int>ans(n);
    ans[0] = arr[0];
    for(int i=1;i<n;i++){
        ans[i] = arr[i] + ans[i-1];
    }
    return ans;
}
void prefixSum2(int arr[], int n){ // Without Extra Array
    for(int i=1;i<n;i++){
        arr[i] = arr[i] + arr[i-1];
    }
}
int main(){
    int arr[] = {1,3,4,5,7,4,2,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    prefixSum2(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}