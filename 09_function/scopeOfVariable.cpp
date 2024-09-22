#include <iostream>
using namespace std;
int glo=8; // global variable -> iss ko har fn me access kar sakte hai 

void fun(){
    cout<<glo;
}

int main(){
    int loc=7; // local variable -> iss ko sirf main fn me he access kar sakte hai
    cout<<loc<<endl;
    cout<<loc+glo<<endl;
    fun();
}