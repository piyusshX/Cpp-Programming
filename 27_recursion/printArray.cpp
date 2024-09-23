#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n,int i){ // array print using recursion
    if(i==n) return;
    cout<<arr[i]<<" ";
    display(arr,n,i+1);
}
void display2(vector<int>& v, int i){ // vector print using recursion
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    display2(v,i+1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }

    // display(arr,n,0);
    display2(v,0);
}