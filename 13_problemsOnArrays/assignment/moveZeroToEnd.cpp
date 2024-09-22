#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(0);
    
    int n=v.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(i!=j && v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}