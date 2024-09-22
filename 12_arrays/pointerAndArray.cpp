#include <iostream>
using namespace std;
int main (){
    int arr[]={1,3,5,3,5,3,5,7,3,};
// declearing pointer for array
    // int* ptr = arr;
    int* ptr = &arr[0]; // agar hum array ke first element ka bhi address ptr ko dege to bhi vo array ko access kar sakta hai 
    // cout<<ptr<<endl;
    // cout<<ptr[0]<<endl;
    ptr[0] = 9;
    for(int i=0;i<=8;i++){
        cout<<ptr[i]<<" ";
       // cout<<i[ptr]<<" ";  // also valid
       // cout<<i[arr]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=8;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // humne ye phir se write iss liye kiya hai kyo ki ptr me loop end hone ke baad koi aalag hi address aagya ha
     cout<<endl;
    *ptr = 8; // ptr -> 1st element
    ptr++; // ptr -> 2nd element
    *ptr = 0;
    ptr--; // ptr -> 1st element
    for(int i=0;i<=8;i++){
        cout<<ptr[i]<<" ";
    }
}