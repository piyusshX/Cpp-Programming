#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v; //you dont need to mention size
    // inserting / input (in the start try to avoid using [] for intput)
    v.push_back(4);
    v.push_back(0);
    v.push_back(3);
    v.push_back(6);
    //output
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<endl;
    // popback
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}