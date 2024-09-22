#include<iostream>
#include<vector>
using namespace std;
void greaterThanX(int x, vector<int>& v){
    for(int i=0;i<v.size();i++){
        if(v[i]>x) cout<<v[i]<<" ";
    }
}
int main(){
    int x;
    cout<<"enter the value of x : ";
    cin>>x;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    cout<<"elements greater than x : ";
    greaterThanX(x,v);
}