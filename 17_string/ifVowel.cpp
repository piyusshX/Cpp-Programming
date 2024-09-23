#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of string : ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    //finding vowel
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') count++;
    }
    cout<<"number of vowels in string : "<<count;
} 