#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "piyush";
    int n = s.size();
    string t = s;
    int i = 0;
    for(int j=n-1;j>=0;j--){
        t[i] = s[j];
        i++;
    }
    cout<<(s + t);
}