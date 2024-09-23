#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;
string removeDuplicate(string& s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "aaabbkkbcdddggan";
    cout<<s<<endl;
    s = removeDuplicate(s);
    cout<<s<<endl;
}