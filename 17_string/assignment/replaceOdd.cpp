#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "abcdefghnbehiuuhew";
    int n=s.size();
    for(int i=0;i<n;i++){
        if(i%2 != 0) s[i] = '#';
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}