#include<iostream>
using namespace std;
// Friend function vo function hote hai jo jis wali class me friend declare kiye jate hai unnke private
// variables and functions ko bhi access kar sakte hai.
// Friend function "friend" keyword ki help se banaya jata hai and iss ko sirf class me declare kiya jata
// hai and defination class ke bahar define kii jati hai.

// Go to operatorOverloading.cpp for another example of it
class A{
    private:
        int aKaPrivate = 10;
    public:
        friend void show(A &a);
        friend class B;
};
void show(A &a){
    cout<<a.aKaPrivate<<endl;
}
int main(){
    A a;
    show(a);
}