#include<iostream>
#include <string>
using namespace std;
int main(){
    string str = "woop";
    cout<<str<<endl;
    str[0]='p';
    cout<<str<<endl;
    // que update all the even possition[index] to by a

    string str1 = "raghav";
    cout<<str1<<endl;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str1[i]='a';
    }
    cout<<str1<<endl;
} 