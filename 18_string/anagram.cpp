#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"enter 1st string : ";
    getline(cin,s);
    cout<<"enter 2nd string : ";
    getline(cin,t);
    
    sort(s.begin(),s.end()); 
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
//     int n = s.size();
//     int m = t.size();
//     if(m==n){
//         sort(s.begin(),s.end()); // sort string according to ascii values
//         sort(t.begin(),t.end());
//         bool flag = true;
//         for(int i=0;i<n;i++){
//             if(s[i] != t[i]) flag = false;
//         }
//         cout<<flag;
//     }
//     else cout<<0;
}