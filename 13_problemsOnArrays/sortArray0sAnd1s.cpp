#include <iostream>
#include<vector>
using namespace std;
void display(int arr[]){
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort01M1(int arr[],int size){
    int noo=0; // no of ones
    int noz=0; // no of zeros
    for(int i=0;i<size;i++){
        if(arr[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<size;i++){
        if(i<noz) arr[i]=0;
        else arr[i]=1;
    }
}

void sort01M2(int arr[], int size){
    int i = 0;
    int j = size - 1;
    while(i<j){
        if(arr[j]==1) j--;
        if(arr[i]==0) i++;
        if(i>j) break;
        if(arr[i]==1 && arr[j]==0){
            arr[i] = 0;
            arr[j] = 1;
            i++,j--;
        }
    }
}

void sort01M3(int arr[], int size){
    int a=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            arr[a]=0;
            a++;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            arr[a]=1;
            a++;
        }
    }
}

int main(){
    int arr[] = {0,1,1,1,0,0,0,0,0,0,0,1,1};
    display(arr);
    int size = 11;
    sort01M2(arr,size);
    display(arr);
}