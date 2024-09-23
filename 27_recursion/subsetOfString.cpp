#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubString(string ans, string str, int i){ //printing 
    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }
    char ch = str[i];
    printSubString(ans,str,i+1);
    printSubString(ans+ch,str,i+1);
}
void storeSubString(string ans, string str, int i, vector<string>& v){ // storing in vector
    if(i==str.size()){
        v.push_back(ans);
        return;
    }
    char ch = str[i];
    storeSubString(ans,str,i+1,v);
    storeSubString(ans+ch,str,i+1,v);
}
int main(){
    string str = "abc";
    vector<string> v;
    storeSubString("",str,0,v);
    // printSubString("",str,0);
    for(string ele : v){
        cout<<ele<<endl;
    }
}