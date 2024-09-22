#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;  
    cout<<"size : ";
    v.push_back(4);
    cout<<v.size()<<" "; // size -> number of elements in vector

    v.push_back(0);
    cout<<v.size()<<" ";

    v.push_back(3);
    cout<<v.size()<<" ";

    v.push_back(6);
    cout<<v.size()<<endl;
}