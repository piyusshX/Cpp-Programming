#include<iostream>
#include<vector>
#include<algorithm> // for using sort function
using namespace std;

int sort(int i, vector<int> v){
    sort(v.begin(),v.end());
    int a = v[i];
    return a;
}
void check(vector<int>& v1){
    bool flag = false;
    for(int i=0;i<v1.size();i++){
        if(v1[i] != sort(i,v1)) {
            flag = true;
            break;
        }
    }
    if(flag == true) cout<<"not sorted";
    else cout<<"sorted";
}
int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>v[i];
    }
    check(v);
}