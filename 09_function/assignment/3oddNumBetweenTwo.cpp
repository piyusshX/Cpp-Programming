#include<iostream>
using namespace std;
void odd(int a, int b){
    for(int i=a+1;i<b;i++){
        if(i%2!=0) cout<<i<<endl;
    }
}
int main(){
    int a,b;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"enter 2nd number : ";
    cin>>b;
    odd(a,b);
}