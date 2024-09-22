#include<iostream>
#include<vector>
#include<algorithm> // for using sort function
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(7);
    v.push_back(55);
    v.push_back(2);

    // at
    cout<<v.at(3); // works same as v[n]
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //sort
    sort(v.begin(),v.end()); // you have to use algorithm librery for using it
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}