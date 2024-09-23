#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = 15;
    int target;
    cout<<"enter target : ";
    cin>>target;

    // Binary Search -> Only works for sorted array

    int lo = 0;   // lower bound
    int hi = n-1; // upper bound
    int mid = -1; // middle idx
    while(lo <= hi){
        mid = lo + (hi-lo/2); // lo + (hi-lo/2) == (lo + hi/2)
        if(arr[mid] == target){
            cout<<"target is present at : "<<mid<<"th index";
            return 0;
        }
        else if(arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    cout<<"target not present";
}