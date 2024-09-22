#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int sum=0;
    int a;  // last digit
    while(n>0){
        a = (n%10);
        n = n/10;
        if(a%2==0) sum = sum + a;
    }
    cout<<"sum of even digits in given number is "<<sum;
}