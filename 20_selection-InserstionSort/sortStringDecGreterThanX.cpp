#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s; //only capital
    cin>>s;
    int n = s.size();
    // printing
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    //making new sting with only char greater or equal to X
    string s1;
    for(int i=0;i<n;i++){
        if(s[i]>='X'){
            s1.push_back(s[i]);
        }
    }
    n = s1.size();
    // sorting new string in decresing order by insertion sort
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && s1[j]<s1[j-1]){
            swap(s1[j],s1[j-1]);
            j--;
        }
    }
    // Printing new decresing order sorted string
    for(int i=0;i<n;i++){
        cout<<s1[i]<<" ";
    }
}