#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "1234";
    int n = s.size();
    int val = 0;
    int x=1;
    for(int i=n-1;i>=0;i--){
        val = val + (int)(s[i]-48)*x;
        x *= 10;
    }
    cout<<val;
}