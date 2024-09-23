#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6] = {2,3,5,1,4,6};
    int n=6;

    // for each loop
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // selection sort     
    for(int i=0;i<n-1;i++){ // n-1 passes
        int min = INT_MAX;
        int idx = -1;
        // calculate minimum element and swap with 1st element of itration
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[i],arr[idx]); // TC = O(n^2) for all cases
    }                          // SC = O(1)
    for(int ele : arr){
        cout<<ele<<" ";
    }
}