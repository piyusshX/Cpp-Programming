#include<iostream>
using namespace std;
int main(){
    char str[5] = {'a','b','c','d','e'}; //its like array of characters
    // in strings computer add \0 in the end of a string as a signal to stop printing

    //normal printing
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    //if we dont know the size of string than we can also print it with the help of \0
    // for(int i=0;str[i]!='\0';i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;

    char str2[5]="abcd"; // you can also declare string like this
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    // cout<<(int)(str[5]);
    char str3[] = {'a','b','c','\0','d','e'}; // if we put \0 in middle of string than comptuer only print upto it
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
} 