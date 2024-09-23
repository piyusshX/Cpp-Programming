#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Tomodachi game"; // here it is 15 char string but here are only 
    cout<<str<<endl;               //14charecters including blank space last char is \0
    string s;
    // cin>>s; //only when there is no space b/w the string

    // ex:- piyush -> this can be taken by cin
    // ex :- piyush jain -> cant be taken bcz cin only take piyush as input here

    //so instead cin we use getline function to take inputs
    getline(cin,s);
    cout<<s<<endl;

    cout<<str[0];// also print through index
}