#include <iostream>
using namespace std;
int main(){
    int arr[]={-5,-4,0,2,4,5,6,7,9};
    int n = sizeof(arr)/4;
    // bool flag = false;
    // for(int i=0;i<=n-1;i++){
    //     if(arr[i]!=i+1){
    //         cout<<i+1;
    //         flag=true;
    //         break;
    //     }
    // }
    // if(flag==false) cout<<"no missing +ve element";
    int x=1;
    for(int i=0;i<=n-1;i++){
        if(arr[i]<x) continue;
        if(arr[i]!=x){
        cout<<x;
        break;
        }
        else x++;
    }
}