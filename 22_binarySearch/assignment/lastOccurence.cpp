#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,4,4,6,6,8,8,8,8,9};
    int n = 12;
    int x = 8;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(mid==n-1){
                v[1]=mid;
                flag = true;
                break;
            }
            else if(arr[mid+1]==arr[mid]) lo = mid+1;
            else{
               flag = true; cout<<mid;
                flag = true;
                break;
            }
        }
        else if(arr[mid]>x) hi = mid-1;
        else lo = mid+1;
    }
    if(flag==false) cout<<-1;
}