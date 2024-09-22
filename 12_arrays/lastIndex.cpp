#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cout<<"enter the number whos last index you want : ";
    cin>>x;
    bool flag = false;
    for(int i=n-1;i>=0;i--){
        if(v[i]==x) {
        cout<<"last index : "<<i;
        flag=true;
        break;
        }
    }
    if(flag == false) cout<<"number not present in array";
}