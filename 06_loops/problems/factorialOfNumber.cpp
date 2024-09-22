#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int f=1;
    for(int i=n;i>0;i--){
        f*=i;
    }
    cout<<f;
}