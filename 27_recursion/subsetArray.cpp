#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[], int n, int i, vector<int> ans){ // storing in vector
    if(i==n) {
        for(int j=0;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(arr,n,i+1,ans);
    ans.push_back(arr[i]);
    subset(arr,n,i+1,ans);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/4;
    vector<int> v;
    subset(arr,n,0,v);
}