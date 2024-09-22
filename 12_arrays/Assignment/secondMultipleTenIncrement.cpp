#include<iostream>
#include<vector>
#include<algorithm> // for using sort function
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void change(vector<int>& v){
    for(int i=0;i<v.size();i++){
        if(i%2==0) v[i]+=10; // even -> increment by 10
        else v[i] = 2*v[i]; // odd -> replace by secound multiple
    }
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(7);
    v.push_back(55);
    v.push_back(2);
    display(v);
    change(v);
    display(v);
}