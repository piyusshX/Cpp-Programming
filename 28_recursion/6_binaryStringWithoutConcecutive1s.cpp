#include<iostream>
using namespace std;
void binaryString(string str, int n){
    if(str.size()==n){
        cout<<str<<endl;
        return;
    }
    binaryString(str+'0',n);
    if(str.size()==0 || str[str.size()-1]!='1') {
        binaryString(str+'1',n);
    }
}
int main(){
    int n = 3;
    binaryString("",n);
}