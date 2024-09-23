#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {4,-3,5,-7,2,5,-1,4,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int l=0;l<n;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;
    int k = 3;
    int ans[n-k+1];
    int firstNeg = -1;
    for(int i=0;i<k;i++){ 
        if(arr[i]<0){
            firstNeg = i;
            break;
        }
    }
    if(firstNeg==-1) ans[0] = 1;
    else ans[0] = arr[firstNeg];
    int i = 1, j = k;
    while(j<n){
        if(firstNeg>=i) ans[i] = arr[firstNeg];
        else{
            firstNeg = -1;
            for(int x=i;x<=j;x++){
                if(arr[x]<0) {
                    firstNeg = x;
                    break;
                }
            }
            if(firstNeg!=-1) ans[i] = arr[firstNeg];
            else ans[i] = 1;
        }
        i++, j++;
    } 
    // Time Complexity : O(n)
    for(int l=0;l<n-k+1;l++){
        cout<<ans[l]<<" ";
    }
}