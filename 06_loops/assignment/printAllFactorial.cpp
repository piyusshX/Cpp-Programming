#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int sum=1;
    int a=0,b=1;
    for(int i=1;i<=n-1;i++){
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<endl;
    }

}