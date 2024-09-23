#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s; //only capital
    cin>>s;
    int n = s.size();
    string s1;
    for(int i=0;i<n;i++){
        if(s[i]>='X'){
            s1.push_back(s[i]);
        }
    }
    n = s1.size();
    // sorting new string in decresing order
    for(int i = 0 ; i < n-1 ; i++){ //n-1 passes
        bool flag = true;
        for(int j = 0 ; j < (n-1-i) ; j++){ //swap
            if(s1[j] < s1[j+1]){ // decreasing sort
                swap(s1[j],s1[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    for( int i = 0 ; i < n ; i++){
        cout<<s1[i]<<" ";
    }
}