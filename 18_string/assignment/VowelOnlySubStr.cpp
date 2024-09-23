#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    string s = "piyushjain";
    int n = s.size();
    int count = 0;
    int num = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;       
        }
        else{
            num += count*(count+1)/2;
            count = 0;
        }
    }
    num += count*(count+1)/2;
    cout<<num;
}