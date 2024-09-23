#include<iostream>
#include<string>
using namespace std;
string countAndSay(int n) {
    if(n==1) return "1";
    string prev = countAndSay(n-1);
    char currDig = prev[0];
    int count = 1;
    string ans = "";
    for(int i=1;i<prev.size();i++){
        if(currDig!=prev[i]){
            ans = ans + to_string(count) + currDig;
            currDig = prev[i];
            count = 1;
        }
        else count++;
    }
    ans = ans + to_string(count) + currDig;
    return ans;
}
int main(){
    int n = 4;
    cout<<countAndSay(n);
}