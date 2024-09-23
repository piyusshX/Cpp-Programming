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
void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;
    // Partition of Array and Pivot Index
    int pivotIdx = partition(arr,si,ei);
    // Recursion
    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ei);
}
int main(){
    int arr[] = {5,2,1,6,7,9,8,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}