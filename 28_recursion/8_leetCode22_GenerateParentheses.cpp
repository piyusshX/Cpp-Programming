#include<iostream>
using namespace std;
void parenthesis(string str, int op, int cb, int n){
    if(op==n){
        for(int i=0;i<op-cb;i++){
            str = str + ")";
        }
        cout<<str<<endl;
        return;
    }
    if(op<n) parenthesis(str+"(",op+1,cb,n);
    if(op>cb) parenthesis(str+")",op,cb+1,n);
}
int main(){
    int n = 3;
    parenthesis("",0,0,n);
}