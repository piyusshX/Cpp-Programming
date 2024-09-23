#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[3][4];
    vector< vector<int> > v(3,vector<int>(4)); // decleration of 2d vector with 3 rows and 4 columns
    vector< vector<int> > v1(3,vector<int>(4,2)); // yaha pe each element ki value 2 hogi initially

    // printing
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //size of row and column
    cout<<v.size()<<endl; //row
    cout<<v[0].size(); // column
}