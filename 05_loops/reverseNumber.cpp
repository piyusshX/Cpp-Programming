#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter initial value : ";
    cin>>n;

// by using iterator(i)

    // for(int i=n;i>=1;i--){
    //     cout<<i<<endl;
    // }


    for(int i=n;i>=1;i--){
        cout<<n<<endl;
        n = n - 1;
    }
}