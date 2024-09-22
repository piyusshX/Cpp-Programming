#include <iostream>
using namespace std;
// array passes by refrence in functions

void display(int a[], int size){ // in actual terms a and b are pointers
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int* b, int size){ // int b[]
    b[0]=8;
    b[3]=9;
}
int main(){
    int arr[5]={1,3,6,4,6};
    int size = sizeof(arr)/4;
    cout<<size<<endl;
    display(arr,size); // arr gives address of the array
    change(arr,size);
    display(arr,size); // both a and b are the same array arr 
}