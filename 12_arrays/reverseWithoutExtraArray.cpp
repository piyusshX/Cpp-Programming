#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverse(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    
    display(v);
    // int j=v.size()-1;
    // for(int i=0;i<=j;i++){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     j--;
    // }

    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }

    reverse(v); // void function made by us

    // reverse(v.begin(),v.end()); // builtin function
    display(v);
}