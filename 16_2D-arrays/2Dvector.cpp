#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< vector<int> > v;
    //v.push_back(1); //we cannot push integer value in 2d vector
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    v1.push_back(4);
    v1.push_back(5);
    
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    
    v.push_back(v1); //but we can push vectors in 2d vector
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][2];
}