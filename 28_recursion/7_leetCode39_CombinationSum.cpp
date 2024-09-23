#include<iostream>
#include<vector>
using namespace std;
void combination(int arr[], vector<int> v, int n, int tar, int idx){
    if(tar==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(tar<0) return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination(arr,v,n,tar-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tar = 8;
    vector<int> v;
    combination(arr,v,n,tar,0);
}