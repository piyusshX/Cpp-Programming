#include <iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr1 = &x;  // for storing address of x
    cout<<ptr1<<endl;
    cout<<&x<<endl;   

    float y = 5;
    float* ptr2 = &y;  // for storing address of y

    cout<<ptr2<<endl;
    cout<<&y; 
}