#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"enter elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    int sec = INT8_MIN;
    for(int i=0;i<=n-1;i++){
        if(sec<arr[i] && arr[i]!=max) sec=arr[i];
    }
    cout<<"secound largest value : "<<sec;
}