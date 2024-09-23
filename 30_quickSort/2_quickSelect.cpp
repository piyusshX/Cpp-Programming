#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivotEle = arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotEle) count++;
    }
    int pi = count+si;
    swap(arr[(si+ei)/2],arr[pi]);
    int i = si, j = ei;
    while(i<pi && j>pi){
        if(arr[i]<=arr[pi]) i++;
        else if(arr[j]>arr[pi]) j--;
        else if(arr[i]>arr[pi] && arr[j]<=arr[pi]) swap(arr[i++],arr[j--]);
    }
    return pi;
}
int quickSelect(int arr[], int si, int ei, int k){ // kth samllest element -> TC = O(n)
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1 > k) return quickSelect(arr,si,pi-1,k);
    else return quickSelect(arr,pi+1,ei,k);
}
int main(){
    int arr[] = {5,2,1,6,7,9,8,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 2;
    cout<<quickSelect(arr,0,n-1,k);
}