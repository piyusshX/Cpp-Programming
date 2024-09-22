#include<iostream>
#include<vector>
using namespace std;
// void change(vector<int> a){  // pass by value -> new vector was created

void change(vector<int>& a){  // pass by refrence 
    a[0]=3;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(7);
    v.push_back(55);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}