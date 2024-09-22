#include<iostream>
using namespace std;
int main(){
    int x =5;
    int* ptr = &x;
    cout<<ptr<<endl;
    
    ptr = ptr + 1; // hexa decimal number 0,1,2,3,..,9,a,b,c,d,e,f
    cout<<ptr<<endl; // ek int ke addition se 4bytes ka increment hota hai 
                    // address value me jo pointer store kiye tha
    //0x61ff08
    //0x61ff0c yaha pe 4byte inc hui hai 9,a,b,c

    bool y=true;
    bool* ptr1 = &y;
    cout<<ptr1<<endl;
    ptr1 = ptr1 + 1; // yaha bool me 1byte ka increment hota hai
    cout<<ptr1<<endl;
    //0x61ff03
    //0x61ff04
}