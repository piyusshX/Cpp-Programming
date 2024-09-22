#include <iostream>
using namespace std;
int main(){
    // AP = 4,7,10,13... upto n terms

    int n;
    cout<<"enter the number of terms : ";
    cin>>n;
    int i=1;
    int a=4;
    while(i<=n){
        cout<<a<<endl;
        a = a + 3;
        i++;
    }
}