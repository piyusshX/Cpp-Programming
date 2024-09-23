#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "12345";
    int x = stoi(s); // string to integer
    cout<<x<<endl;
    cout<<x+1<<endl;

    string s2 = "1234326487327";
    long long a = stoll(s2); // string to lomg long
    cout<<a;
}