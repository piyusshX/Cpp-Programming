#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[], int n, int i, vector<int> ans, int k){ // storing in vector
    if(i==n) {
        if(ans.size()==k){
            for(int j=0;j<ans.size();j++){            
                    cout<<ans[j]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-i)<k) return; // TC better karne ke liye
    subset(arr,n,i+1,ans,k);
    ans.push_back(arr[i]);
    subset(arr,n,i+1,ans,k);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int k = 3;
    int n = sizeof(arr)/4;
    vector<int> v;
    subset(arr,n,0,v,k);
}