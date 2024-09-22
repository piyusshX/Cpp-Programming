#include <iostream>
using namespace std;
int main(){
    // GP= 1,2,4,8,16,32....

    int n;
    cout<<"enter number of terms : ";
    cin>>n;
    int a=1; // a = 1st term
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a*2; // r = 2
    }
}

