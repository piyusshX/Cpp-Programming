#include <iostream>
using namespace std;
int main(){
// print AP = 1,3,5,7,9.... upto n
// a=1 d=2 -> nth term = a + (n-1)*d
//     nth term = 2*n - 1
    int n;
    cout<<"enter the number of terms : ";
    cin>>n;
    // for(int i=1;i<=(2*n)-1;i+=2){
    //     cout<<i<<endl;
    // }

  //  method 2 easy and works for all AP
//   seperate variable

    int a = 1; // a = 1st term
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a+2; // d = 2
    }
    // dono code same times chalege but ye wala aacha ha
}