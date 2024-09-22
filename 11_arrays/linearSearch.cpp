#include <iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"enter elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"enter element you want to search : ";
    cin>>x;
    //search
    //check mark
    bool flag = false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag=true) cout<<"present";
    else cout<<"not present";
}