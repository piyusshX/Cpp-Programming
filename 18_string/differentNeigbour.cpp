#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    int n = str.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(n==1) break;
        if(i == 0 || i == n-1){
            if(str[i]!=str[i+1] || str[i]!=str[i-1]) count++;
        }
        else{
            if(str[i]!=str[i+1] && str[i]!=str[i-1]) count++;
        }
    }
    cout<<"number of different neigbour : "<<count;
}