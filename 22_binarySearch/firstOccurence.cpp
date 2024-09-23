#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,3,3,4,5,};
    int n = 7;
    int target;
    cout<<"enter target : ";
    cin>>target;

    // Binary Search -> Only works for sorted array

    int lo = 0;   // lower bound
    int hi = n-1; // upper bound
    int mid = -1; // middle idx
    bool flag = false;
    while(lo <= hi){
        mid = lo + (hi-lo/2); // lo + (hi-lo/2) == (lo + hi/2)
        if(arr[mid] == target){
            if(mid==0){
                v[0]=mid;
                flag = true;
                break;
            }
            else if(arr[mid-1]==arr[mid]) hi = mid - 1;
            else{
                cout<<mid;
                flag = true;
                break;
            }
        }
        else if(arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag == false) cout<<-1;
}