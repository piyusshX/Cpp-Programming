#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    display(v);

    vector<int> v2(v.size());
    for(int i=0;i<v2.size();i++){
        // i+j = size - 1
        int j = i;
        v2[j] = v[v2.size()-i-1];
    }

    display(v2);
}