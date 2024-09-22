#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a intger : ";
    cin>>n;
    if(n<0){
        cout<<"the absolute value of given integer is "<<-n;
    }
    else {
        cout<<"the absolute value of given integer is "<<n;
    }
}