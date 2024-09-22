#include<iostream>
#include<vector>
using namespace std;
int main(){
    // intput with size
    vector<int> v(5);
     cout<<"enter elements : ";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
    // input without size
    vector<int> vec;
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}