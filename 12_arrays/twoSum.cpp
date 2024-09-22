#include<iostream>
#include<vector>
using namespace std;
int main(){ //leetcode 1 que
    int x;
    cout<<"enter target : ";
    cin>>x;

    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);

    //input
    cout<<"enter elements : ";
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
    bool flag = false;
        for(int i=0;i<n-1;i++){ // n-1 ya phir size-2 tak iss liye chala rahe hai kyo ki phir j=n+1 ho jaye ga and loop wese he nhi chalega
            for(int j=i+1;j<n;j++){
                if(v[i]+v[j]==x){
                    cout<<"("<<i<<","<<j<<")"<<endl;
                    flag=true;
                }
            }
        }
    if(flag == false) cout<<"target cannot be achieved in this array";
}