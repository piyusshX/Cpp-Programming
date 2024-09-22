#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int triplet(vector<int>& v, int x){
    int n = v.size();
    int a=0;
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
                        if(v[i]+v[j]+v[k]==x) a++;
                    }
            }
    }
    return a;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    
    int x;
    cout<<"enter the target : ";
    cin>>x;
    cout<<triplet(v,x);
}