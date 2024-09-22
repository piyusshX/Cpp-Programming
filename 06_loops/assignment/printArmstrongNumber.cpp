// If the sum of cubes of each digit of the number 
// is equal to the number itself, then the number 
// is called an Armstrong number.
// example:- 153 = (1*1*1)+(5*5*5)+(3*3*3)
// Print all the AN between 1 to 500

#include <iostream>
using namespace std;
int main (){
    int a;
    int b;
    for(int i=1;i<=500;i++){
        int sum=0;
        a=i;
        while(a>0){
            b = a%10;
            sum += b*b*b;
            a/=10;
        }
        if(i==sum) {
        cout<<sum<<endl;
        }

    }
}