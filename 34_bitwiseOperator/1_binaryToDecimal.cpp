#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(string &s, int n){
    int count = 0;
    int ans = 0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1') ans += pow(2,count);
        count++;
    }
    return ans;
}
int binaryConversion(string &s, int n){
    int ans = 0;
    for(int i=n-1;i>=0;i--){
        char ch = s[i];
        int num = ch - '0';
        ans += num*(1 << (n-i-1));
    }
    return ans;
}
int main(){
    string s = "1011101";
    int n = s.size();
    cout<<binaryConversion(s,n);
}