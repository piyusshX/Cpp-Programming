#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "piyush";
    int n = str.size();
    int i = 0;
    int j = n-1;
    bool flag = false;
    while(i<=j){
        if(str[i] != str[j]) flag = true;
        i++,j--;
    }

    if(flag == true) cout<<"not a pallindrome";
    else cout<<"it is a pallindrome";
}