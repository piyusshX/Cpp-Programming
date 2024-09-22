#include<iostream>
using namespace std;
int main(){
    int arr[7] = {2,4,6,2,1,4,0};
    //  int arr[] = {2,4,6,2,1,4,0}; // we can also do this but we have to initiazize the element at the same time
    // cout<<arr[0]<<" "<<arr[6]<<endl;
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr[6];
}