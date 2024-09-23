#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdefgh";
    cout<<s<<endl;
    int n =  s.size();
    reverse(s.begin()+0,s.begin()+n/2);
    cout<<s<<endl;
}