#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    vector<int> v;
    v.push_back(1);
    int carry=0;
    for(int x=2;x<=n;x++){ //for multiplying 1*2*3*4...
        for(int i=0;i<v.size();i++){ // for indexes 0,1,2,3,4...
            int val = v[i]*x+carry;
            v[i] = val%10;
            carry = val/10;
        }
        while(carry!=0){
            v.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}