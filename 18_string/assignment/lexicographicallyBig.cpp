#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    string str = "tomodachi game manga is the best";
    stringstream s(str);
    vector<string> v;
    string temp;
    while(s>>temp){
        v.push_back(temp);
    }
    int n = v.size();
    sort(v.begin(),v.end());
    cout<<v[n-1];
}