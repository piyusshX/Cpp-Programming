#include<iostream>
#include<vector>
using namespace std;
vector<int> productOfArray(int arr[], int n){
    // prefix product array
    int pre[n];
    pre[0] = 1;
    int product = arr[0];
    for(int i=1;i<n;i++){
        pre[i] = product;
        product = product * arr[i];
    }
    // suffix product array 
    int suf[n];
    suf[n-1] = 1;
    product = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i] = product;
        product *= arr[i];
    }
    // ans[i] = pre[i] * suf[i]
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i] = pre[i] * suf[i];
    }
    return ans;
}
vector<int> productExceptSelf(int nums[], int n) { 
        int n = nums.size();
        vector<int> pre(n); // to store the product before ith element
        // Prefix Array 
        pre[0] = 1;
        int product = nums[0];
        for(int i=1;i<n;i++){
            pre[i] = product;
            product = product * nums[i];
        }
        // Suffix Array (in prefix Only)
        product = nums[n-1];
        for(int i=n-2;i>=0;i--){
            pre[i] = pre[i] * product;
            product = product * nums[i];
        }
        return pre;
    }
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> ans = productOfArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}