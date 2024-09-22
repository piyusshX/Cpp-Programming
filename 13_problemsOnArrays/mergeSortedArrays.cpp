#include <iostream>
#include<vector>
using namespace std;
void display(int arr[]){
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr1[], int arr2[], int arr3[], int n1, int n2){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<=n1-1 && j<=n2-1){
        if(arr1[i]<arr2[j] && i<=n1) {
            arr3[k] = arr1[i];
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    if(i==n1){// arr1 ke sare elements utha liye ha
        while(j<=n2-1){
            arr3[k]=arr2[j];
            j++,k++;
        }
    }
    if(j==n2){// arr2 ke sare elements utha liye ha
        while(i<=n1-1){
            arr3[k]=arr1[i];
            i++,k++;
        }
    }
}
int main(){
    int arr1[] = {1,4,6,8,11};
    int arr2[] = {2,3,5,7,9};
    int n1=5; 
    int n2=5;
    int arr3[n1+n2];
    merge(arr1,arr2,arr3,n1,n2);
    display(arr3);
}