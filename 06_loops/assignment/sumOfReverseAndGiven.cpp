#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int num=n;
    int reverse=0;
    int a; // last digit
    while(n>0){
        reverse*=10;
        a = (n%10);
        reverse = reverse + a;
        n/=10;
    }
    cout<<reverse+num;
}