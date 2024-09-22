#include<iostream>
#include<vector>
using namespace std;
void nonRep(vector<int>& arr){
    int n=arr.size();
    int a=INT16_MIN;
    int b=a;
    for(int i=0;i<n;i++){
        bool flag = false;
        int j;
        for(j=0;j<n;j++){
            if(j!=i && arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            a = arr[i];
            break;
        }
    }
    if(a!=b) cout<<"first non repeating element : "<<a;
    else cout<<"no unique element is found";
}
int main(){
    vector<int> arr={1,2,3,1,2,3};
    nonRep(arr);
}