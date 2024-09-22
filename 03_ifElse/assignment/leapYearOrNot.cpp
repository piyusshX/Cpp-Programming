#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year : ";  // leap -> every 4 years and recent one is 2020
    cin>>year;              // 2020%4 == 0 not every year which has %4=0 is LY like 1900
    if(year%400==0) cout<<"it is leap year";
    else if(year%100==0) cout<<"it is not leap year";
    else if(year%4==0) cout<<"it is leap year";
    else cout<<"it is not leap year";
}