#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5); // vector with size = 5 and each element with initial value 0
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0]<<" "<<v[3]<<endl;

    vector<int> v2(6,3); // vector with size = 5 and each element with initial value 0
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    cout<<v2[0]<<" "<<v2[3]<<endl;
}