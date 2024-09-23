#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "piyush";
    int n = str.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') continue;
        else count++;
    }
    cout<<count;
}