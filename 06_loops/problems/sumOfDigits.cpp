#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a; // for last digit of number
    int sum=0;
    while(n>0){
  //    int a = n - (n/10)*10; // this will give us last digit
        int a = n%10; // 10 se modulus lene pe bhi last digit aajati ha
        sum+=a;
        n=n/10;
    }
    cout<<"sum of digits is "<<sum;
}