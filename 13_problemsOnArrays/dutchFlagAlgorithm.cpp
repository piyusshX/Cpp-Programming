#include <iostream>
#include<vector>
using namespace std;
void display(int arr[]){
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortM1(int arr[],int size){
    int noz=0; // no of ones
    int noo=0; // no of zeros
    int notw=0; // no of twos
    for(int i=0;i<size;i++){
        if(arr[i]==0) noz++;
        else if(arr[i]==1) noo++;
        else notw++;
    }
    for(int i=0;i<size;i++){
        if(i<noz) arr[i]=0;
        else if(i<(noz+noo)) arr[i]=1;
        else arr[i]=2;
    }
}

void dutchFlagMethod(int arr[], int size){
    int low = 0;
    int mid = 0;
    int  high = size - 1;
    while(mid<=high){
        if(arr[mid]==2){
            int temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
        }
        else if(arr[mid]==0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++,mid++;
        }
        else if(arr[mid]==1) {
            mid++;
        }
    }
}

int main(){
    int arr[] = {0,1,2,1,1,2,1,1,1,2,2,2,0,0,0,2,0,0};
    display(arr);
    int size = 18;
    dutchFlagMethod(arr,size);
    display(arr);
}