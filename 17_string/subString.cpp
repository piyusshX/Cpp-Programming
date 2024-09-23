#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="piyush";
    // s.substr(idx,len) len -> kitne index tak 
    cout<<s.substr(2,2)<<endl;
    cout<<s.substr(2)<<endl; // agar len ki jagh kuch nhi likh to idx ke age sab lelo
} 