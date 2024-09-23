#include<iostream>
#include<limits.h>
using namespace std;

//          SLIDING WINDOW ALGORITHM

int main(){
    int arr[] = {4,5,6,1,8,3,9,3,8,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum = INT_MIN;
    int k = 3;
    int currSum = 0;
    for(int i=0;i<k;i++){ // No of Operation : k
        currSum += arr[i];
    }
    // SLIDING WINDOW ALGORITHM
    int i = 1, j = k, idx = 0;
    while(j<n){ // No of Operation : n-k
        currSum = currSum + arr[j] - arr[i-1];
        if(currSum > maxSum){
            maxSum = currSum;
            idx = i;
        }
        i++, j++;
    } // Total No of Operation : n-k+k = n
    // Time Complexity : O(n)
    cout<<idx<<endl;
    cout<<maxSum;
}