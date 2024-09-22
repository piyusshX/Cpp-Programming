#include<iostream>
using namespace std;
int main(){
    // int arr[6]={1,2,3,3,2,1};
     int arr[6]={1,2,3,3,54,3};
    bool flag = true;
    for(int i=0,j=5;i<=j;i++,j--){
        if(arr[i]!=arr[j]) flag = false;
    }
    if(flag == true) cout<<"it is pallindrome";
    else cout<<"not pallindrome";
}