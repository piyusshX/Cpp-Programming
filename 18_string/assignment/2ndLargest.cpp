#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    string s = "127488820";
    int n = s.size();
    int max = 5;
    int smax = 2;
    for(int i = 0 ; i<n ; i++){
        if(s[i]>max) max = s[i];
    }
    for(int i = 0 ; i<n ; i++){
        if(s[i]>smax && s[i]!=max) smax = s[i];
    }
    cout<<smax-48;
}