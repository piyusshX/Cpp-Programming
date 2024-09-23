#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abdc";
    string t = "azdc";
    cout<<s.compare(t);
    // -1 -> s < t
    //  0 -> s = tp
    // +1 -> s > t

}