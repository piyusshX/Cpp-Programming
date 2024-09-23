#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>> &v){
    v[0][0] = 10;
}
void length(vector<vector<int>> &v){
    cout<<v.size();
}
int main(){
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    v1.push_back(4);
    v1.push_back(5);
    
    v.push_back(v1);
    v.push_back(v2);

    cout<<v[0][0]<<endl;
    change(v);
    cout<<v[0][0]<<endl;
    length(v);
}