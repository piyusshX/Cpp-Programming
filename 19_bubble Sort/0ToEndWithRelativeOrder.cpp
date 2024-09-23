#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<8;i++){
        cin>>v[i];
    }
    
    for(int i = 1 ; i < n ; i++){
        bool flag = true;
        for(int j = 0 ; j < (n-1-i) ; j++){ 
            if(v[j] == 0){
                swap( v[j] , v[j+1] );
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}