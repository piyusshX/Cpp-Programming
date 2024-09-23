#include <iostream>
using namespace std;
int main(){
    int arr[6] = {5,1,5,5,2,3};
    int n=6;

    // for 1st minimum num we need to sort the array
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    //storing sorted array into an interger
    int sum1 = 0;
    for(int i=0;i<n;i++){
        sum1*=10;
        sum1 += arr[i];
    }

    // for 2nd minimum num we need to change the sorted array
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    //storing 2nd array into an interger
    int sum2 = 0;
    for(int i=0;i<n;i++){
        sum2*=10;
        sum2 += arr[i];
    }
    cout<<"sum : "<<sum1+sum2;
}