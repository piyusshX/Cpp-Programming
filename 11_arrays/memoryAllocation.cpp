#include <iostream>
using namespace std;
int main(){
    int arr[5];

    cout<<&arr<<endl; // same address as 1st element of array
    //cout<<arr<<endl; // give us address of array i:e add of arr[0]

    for(int i=0;i<=4;i++){
        cout<<&arr[i]<<endl;
    }
        // 0x61fef8
        // 0x61fefc
        // 0x61ff00
        // 0x61ff04
        // 0x61ff08
        
}