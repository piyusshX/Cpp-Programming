#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,1,1,1,1,1,1,1};
    int n = 11;
    int lo = 0;
    int hi = n-1;
    int fo = -1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==1){ // first occurence of 1
            if(mid==0){
                fo = mid;
                flag = true;
                break;
            }
            else if(arr[mid-1]==1) hi = mid-1;
            else {
                fo = mid;
                flag = true;
                break;
            }
        }
        else lo = mid+1;
    }
    if(flag = true) cout<<(n-fo);
    else cout<<"1 is not present";
}