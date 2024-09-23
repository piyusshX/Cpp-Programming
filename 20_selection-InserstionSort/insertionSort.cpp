#include <iostream>
using namespace std;
int main(){
    int arr[5] = {5,3,1,4,2};
    int n=5;

    // for each loop
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // insertion sort    --> TC = O(n^2) for avg and worst case and O(n) for best case
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}