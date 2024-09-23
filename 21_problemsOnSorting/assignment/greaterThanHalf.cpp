#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[10] = {5,33,6,36,64,85,3,1,2,4};
    int n=10;

    for(int i=0;i<(n/2)+1;i++){ // n/2+1 passes
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=n-1;i>=n/2;i--){
        cout<<arr[i]<<" ";
    }
}