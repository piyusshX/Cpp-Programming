#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int m = 4;
    int n = 4;
    int ans = -1;
    int noo = 0;
    for(int i=0;i<m;i++){
        int lo = 0;
        int hi = n-1;
        int fo = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[i][mid]==1){ // first occurence of 1
                if(mid==0){
                    fo = mid;
                    if(noo<n-fo){
                        noo = n-fo;
                        ans = i;
                    }
                    break;
                }
                else if(arr[i][mid-1]==1) hi = mid-1;
                else {
                    fo = mid;
                    if(noo<n-fo){
                        noo = n-fo;
                        ans = i;
                    }
                    break;
                }
            }
            else lo = mid+1;
        }
    }
    cout<<ans;
}