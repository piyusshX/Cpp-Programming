#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,3,5,64,6,7};
    int max=arr[0];
    int smax=arr[0];
    int tmax=arr[0];
    for(int i=1;i<=5;i++){
        if(max<arr[i]) max=arr[i];
    }
    for(int i=1;i<=5;i++){
        if(smax<arr[i] && arr[i]!=max) smax=arr[i];
    }
    for(int i=1;i<=5;i++){
        if(tmax<arr[i] && arr[i]!=max && arr[i]!=smax) tmax=arr[i];
    }
    cout<<max<<" "<<smax<<" "<<tmax;
}