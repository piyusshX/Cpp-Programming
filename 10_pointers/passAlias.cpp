#include<iostream>
using namespace std;
void swap(int &a, int &b){ // sasta pass by refrence
    int temp = a;
    a=b;
    b = temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}