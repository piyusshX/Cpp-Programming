#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "leetcode";
    vector<int> arr(26,0);
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int max=arr[0];
    for(int i=1;i<26;i++){
        if(arr[i]>max) {
        max = arr[i];
        }
    }
    for(int i=1;i<26;i++){
        if(arr[i] == max) {
        cout<<(char)(97+i)<<" "<<max;
        }
    }
}