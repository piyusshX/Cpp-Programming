#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans, string str, int i){
    if(i==str.size()){
        cout<<ans;
        return;
    }
    char ch = str[i];
    if(ch=='i') removeChar(ans,str,i+1);
    else removeChar(ans+ch,str,i+1);
}
int main(){
    string str = "piyush jain";
    removeChar("",str,0);
}