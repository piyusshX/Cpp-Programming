#include<iostream>
using namespace std;
int printIDX(int arr[],int n, int element){
    if(n==0) return -1;
    if(arr[n-1]==element) {
        return n-1;
    }
    printIDX(arr,n-1,element);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    int element = 3;
    cout<<printIDX(arr,n,element);
}