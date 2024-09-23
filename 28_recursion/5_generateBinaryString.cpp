#include<iostream>
using namespace std;
void binaryString(string str, int n){
    if(str.size()==n){
        cout<<str<<endl;
        return;
    }
    binaryString(str+'0',n);
    binaryString(str+'1',n);
}
int main(){
    int n = 3;
    binaryString("",n);
}