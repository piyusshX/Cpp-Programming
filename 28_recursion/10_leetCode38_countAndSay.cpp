#include<iostream>
using namespace std;
string countAndSay(int n) {
    if(n==1) return "1";
    string str = countAndSay(n-1);
    string ans = "";
    char curr = str[0];
    int count = 1;
    for(int i=1;i<str.size();i++){
        if(str[i]!=curr){
            string s = to_string(count) + curr;
            ans = ans + s;
            curr = str[i];
            count = 1;
        }
        else count++;
    }
    string s = to_string(count) + curr;
    ans = ans + s;
    return ans;
}
int main(){
    int n = 4;
    cout<<countAndSay(n);
}