#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int a=1;
    for(int i=0;i<=n-1;i++){
        a = a * arr[i];
    }
    cout<<"product of elements : "<<a;
}