#include <iostream>
using namespace std;
void fun(int n, int* ptr1, int* ptr2){
    *ptr2 = n%10;
    while(n>9){
        n = n/10;
    }
    *ptr1 = n;
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int first,last;
    int* ptr1 = &first;
    int* ptr2 = &last;
    fun(n,ptr1,ptr2);
    cout<<first<<" "<<last;
}