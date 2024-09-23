#include<iostream>
using namespace std;
void printRev(int arr[], int n){
    if(n==0) return ;
    cout<<arr[n-1]<<" ";
    printRev(arr,n-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    printRev(arr,n);
}