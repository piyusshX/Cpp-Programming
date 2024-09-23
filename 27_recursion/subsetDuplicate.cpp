#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void storeSubString(string ans, string str, int i, vector<string>& v, bool flag){ // storing in vector
    if(i==str.size()){
        v.push_back(ans);
        return;
    }
    char ch = str[i];
    if(i==(str.size()-1)){
        if(flag == true ) storeSubString(ans+ch,str,i+1,v,true);
        storeSubString(ans,str,i+1,v,true);
        return; // aage ki call nhi lage
    }
    char dh = str[i+1];
    if(ch==dh){ // duplicate
        if(flag == true ) storeSubString(ans+ch,str,i+1,v,true);
        storeSubString(ans,str,i+1,v,false);
    }
    else{ // not duplicate
        if(flag == true ) storeSubString(ans+ch,str,i+1,v,true);
        storeSubString(ans,str,i+1,v,true);
    }
}
int main(){
    string str = "abc";
    sort(str.begin(),str.end());
    vector<string> v;
    storeSubString("",str,0,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}