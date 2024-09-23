#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {22,45,21,45,2,5,6};
    int n=7;
    int k;
    cout<<"enter k : ";
    cin>>k;
    for(int i=0;i<k;i++){ // k passes
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<arr[k-1];
}