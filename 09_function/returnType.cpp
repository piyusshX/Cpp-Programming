#include <iostream>
#include <cmath> // for square root builtin function
using namespace std;
int sum(int x, int y){
    return x+y;
}
int main(){
    cout<<sum(7,8)<<endl;
    cout<<min(4,8)<<endl; // builtin functions
    cout<<max(6,9)<<endl;
    cout<<sqrt(9)<<endl; // square root function required a special header file
}