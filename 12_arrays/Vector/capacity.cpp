#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"capacity : ";
    v.push_back(4);
    cout<<v.capacity()<<" "; // capacity -> number of boxes at the time/real capacity

    v.push_back(0);
    cout<<v.capacity()<<" ";

    v.push_back(3);
    cout<<v.capacity()<<" ";

    v.push_back(6);
    cout<<v.capacity();

    cout<<endl;
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<v.capacity()<<endl; // agar hum elements ko nikal bhi lete hai to bhi capacity change nhi hoti ha
} 