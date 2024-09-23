#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream s(str);
    string temp;
    while(s>>temp){
        cout<<temp<<endl;
    }
}