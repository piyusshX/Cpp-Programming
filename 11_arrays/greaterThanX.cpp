#include <iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"enter elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"enter element you want to search : ";
    cin>>x;
    int count = 0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<"elements greater than "<<x<<" : "<<count;
}