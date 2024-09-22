#include <iostream>
using namespace std;
int main(){
    // do while me ek baar code bina cond.
    // check karehi execute hojata hai
    // matlab variable agar cond. ko satisfy 
    // nhi bhi karaha hoga phir bhi
    // ek baar to output aayega he aayega

    int i=1;
    do{
        cout<<i<<endl;
        i++;
    } while(i<=10);

//  agar hum i = 11 kar de to phir cond. false hojayegi
// but phir bhi ek baar 11 print hoga
}