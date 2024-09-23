#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {4,5,6,1,8,3,9,3,8,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = INT_MIN;
    int k = 3;
    int idx = -1;
    for(int i=0;i<=n-k;i++){ // No of Operations : (n - k + 1)
        int sum = 0;
        for(int j=i;j<i+k;j++){ //No of Operations : k
            sum += arr[j];
        }
        if(maxi<sum){
            maxi = sum;
            idx = i;
        }
    } // Total No of Operations : (n - k + 1)*k
    // Time Complexity : O(n*k)
    cout<<idx<<endl;
    cout<<maxi;
}