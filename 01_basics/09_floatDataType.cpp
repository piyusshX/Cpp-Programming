#include <iostream>
using namespace std;
int main (){
    // float data can store real numbers
         
         float x = 5;
         float y = 2;
              cout<<x+y<<endl;
              cout<<x-y<<endl;
              cout<<x*y<<endl;
              cout<<x/y<<endl;

          float a = 2/7;
          // here ans is 0 bcz comp treat 2 and 7 as intergers not real no
          float b = 2/7.0;
          // but here it will treat as real no bcz od (.0)
           cout<<a<<endl;
           cout<<b;
}