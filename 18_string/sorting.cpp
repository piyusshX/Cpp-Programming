#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end()); // sort string according to ascii values
    cout<<s;
}