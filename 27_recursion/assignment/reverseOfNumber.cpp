#include<iostream>
using namespace std;
void reverseNum(int n, int rev){
    if(n==0){
        cout<<rev;
        return;
    }
    rev = (rev*10) + n%10 ;
    reverseNum(n/10,rev);
}
int main(){
    int n = 1236;
    reverseNum(n,0);

}