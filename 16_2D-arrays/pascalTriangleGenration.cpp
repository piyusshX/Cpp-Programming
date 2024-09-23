#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numRows;
    cout<<"enter number : ";
    cin>>numRows;
    vector< vector<int> > v;
    for(int i=1;i<=numRows;i++){
        vector<int> a(i);
        v.push_back(a);
    }
    //generating
    for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j) v[i][j]=1;
            else v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
    //printing
    for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}