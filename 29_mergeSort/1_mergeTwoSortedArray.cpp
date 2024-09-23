#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()){
        while(j<b.size()) res[k++] = b[j++];
    }
    else {
        while(i<a.size()) res[k++] = a[i++];
    }
}
int main(){
    int arr[] = {1,2,4,5,7};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {3,6,8,12,14};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    vector<int> a(arr,arr+n1); // all the elements of arr is copied in a
    vector<int> b(brr,brr+n2);
    vector<int> res(n1+n2);
    merge(a,b,res);
    for(int i=0;i<n1+n2;i++){
        cout<<res[i]<<" ";
    }
}