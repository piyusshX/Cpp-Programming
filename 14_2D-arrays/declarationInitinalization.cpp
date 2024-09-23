#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    
    int brr[][] = {{1,2,3},{4,5,6},{7,8,9}};
    int crr[][] = {1,2,3,4,5,6,7,8,9};
    int drr[][3] = {{1,2,3},{4,5,6},{7,8,9}}; // if dec and initi. ek sath hota hai to coloum akela bhi do to chalega
    int err[][3] = {1,2,3,4,5,6,7,8,9};

    cout<<arr[0][0];
}