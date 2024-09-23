#include <iostream>
using namespace std;
// function calling functon

void fun(){ // give an infinite loop type thing
    cout<<"hey!"<<endl;
    fun(); 
}
void gun(int n){ // recursion 
    if(n==0) return;
    cout<<"hey!"<<endl;
    gun(n-1);
}
int main(){
    // fun();
    gun(5);
}