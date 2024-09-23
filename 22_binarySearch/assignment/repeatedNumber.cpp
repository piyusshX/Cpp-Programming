#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,11,12,13};
    int n = 14;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid+1){ // means no missing element behind this element -> arr[3]==3+1==4
            lo = mid+1;
        }
        else if(arr[mid+1]==mid+1) hi = mid-1;
    }
    cout<<arr[lo];
}