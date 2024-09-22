#include <iostream>
#include<vector>
using namespace std;
void display(int arr[]){
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

void PosBegNegEnd(int arr[], int size){
    int i = 0;
    int j = size - 1;
    while(i<j){
        if(arr[j]<0) j--;
        if(arr[i]>=0) i++;
        if(i>j) break;
        if(arr[j]>=0 && arr[i]<0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++,j--;
        }
    }
}
int main(){
    int arr[] = {1,-4,-6,-7,3,6,7,2,-9};
    display(arr);
    int size = 9;
    PosBegNegEnd(arr,size);
    display(arr);
}