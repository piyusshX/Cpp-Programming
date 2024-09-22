#include<iostream>
#include<vector>
#include<algorithm> // for using sort function
using namespace std;
void uniqueVal(vector<int>& v){
    for(int i=0;i<v.size();i++){
        bool flag = true;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j] && i!=j) {
                flag = false;
                break;
            }
        }
        if(flag == true) cout<<"unique value : "<<v[i];
    }
}
int main(){ // size must be odd
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    v.push_back(3);
    uniqueVal(v);
}