#include<iostream>
#include<climits>
using namespace std;
void maxVal(int arr[],int n,int i, int max){ 
    if(i==n){
        cout<<max;
        return;
    }
    if(max<arr[i]) max = arr[i];
    maxVal(arr,n,i+1,max);
}
int maxInArray(int arr[],int n,int i){
    if(i==n) return INT_MIN;
    return max(arr[i],maxInArray(arr,n,i+1));
}
int main(){
    int arr[] = {1,2,8,4,5};
    int n = sizeof(arr)/4;
    // maxVal(arr,n,0,INT_MIN);
    cout<<maxInArray(arr,n,0);
}