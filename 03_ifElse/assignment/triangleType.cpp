#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st side : ";
    cin>>a;
    cout<<"enter 2nd side : ";
    cin>>b;
    cout<<"enter 3rd side : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
      if(a==b && b==c && a==c) cout<<"it can make equilateral triangle";
      else if(a==b || b==c || c==a) cout<<"it can make isosceles triangle";
      else if(a!=b && b!=c && a!=c) cout<<"it can make saclene triangle"; 
    }
    else cout<<"entered sides cannot make a triangle";
}