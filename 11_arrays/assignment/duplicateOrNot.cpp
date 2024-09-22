#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"enter elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag = false;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j] && i!=j){
                flag = true;
                break;
            }
        }
    }
    if(flag==true) cout<<"contain duplicate elements";
    else cout<<"no duplicate elements";
}