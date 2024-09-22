#include<iostream>
#include<vector>
#include<algorithm> // for using sort function
using namespace std;
int difference(vector<int>& v){
    int a = 0;
    int b = 0 ;
    for(int i=0;i<v.size();i++){
        if(i%2==0) a = a + v[i];
        else b = b + v[i];
    }
    return a-b;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(7);
    v.push_back(55);
    v.push_back(2);
    cout<<difference(v);
}