#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6] = {2,3,5,1,4,6};
    // for each loop is generally used for printing array and vector

    // for each loop
    for(int ele : arr){
        cout<<ele<<" ";
    }
}