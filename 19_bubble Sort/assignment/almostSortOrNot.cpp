#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,5,5,4};
    int n = 5;
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i] = arr[i];
    }
    // bubble sort
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    // arr = 1,2,3,4,5
    // brr = 2,1,3,5,4
    for(int i=0;i<n;i++){
        if(i==0){
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
                cout<<"Not almost sorted";
                return 0;
            }
        }
        else if(i==(n-1)){
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
                cout<<"Not almost sorted";
                return 0;
            }
        }
        else{
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1] && brr[i]!=arr[i-1]){
                cout<<"Not almost sorted";
                return 0;
            }
        }
    }
    cout<<"almost sorted";
}