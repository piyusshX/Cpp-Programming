#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,8,7,5,3,2,1};
    int n = 7;
    int target = 9;
    int lo = n-1;
    int hi = 0;
    bool flag = false;
    while(hi<=lo){
        int mid = hi + (lo-hi)/2;
        if(arr[mid]==target){
            flag = true;
            cout<<"yes";
            break;
        }
        else if(arr[mid]>target) hi = mid + 1;
        else lo = mid - 1;
    }
    if(flag == false) cout<<"no";
    return 0;
}