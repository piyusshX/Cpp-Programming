#include<iostream>
using namespace std;
void square(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number of squares you want : ";
    cin>>n;
    square(n);
}