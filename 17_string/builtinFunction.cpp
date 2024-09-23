#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdefg";
    //size
    cout<<s.size()<<endl; //print size without \0
    cout<<s<<endl;
    //pushback and popback
    s.push_back('h');
    s.push_back('i');
    cout<<s<<endl;

    s.pop_back();
    s.pop_back();
    cout<<s<<endl;

    // + operator
    string str = "Tomodachi";
    string str1 = "Game";
    cout<<str<<endl;

    str = str + str1; // modify or add two strings

    cout<<str<<endl;

    str = str + " is Good";
    cout<<str<<endl;

    str = "Anime " + str; // also add in the begining of string
    cout<<str<<endl;

    // reverse
    reverse(s.begin(),s.end()); //for simple full string reverse
    cout<<s<<endl;

    //for reverseing b/w certain index
    // reverse(s.begin()+(index no),s.being()+(index no+1))

    reverse(s.begin()+1,s.begin()+5); //for reversing from index 1 to 4
    cout<<s<<endl;
}