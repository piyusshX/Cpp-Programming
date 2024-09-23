#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    string s = "car";
    string t = "rac";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"Given strings are Anagram";
    else cout<<"Not a Anagram";
}