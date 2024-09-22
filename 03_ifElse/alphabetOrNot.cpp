#include <iostream>
using namespace std;
     // code correct hai vs code ganja fukke betha hai
int main(){
    char c;
    cout<<"enter character : ";
    cin>>c;
    int x = (int)c;


    if(x>=65 && x<=90){
        cout<<"given character is capital alphabet";
    }
     if(x>=97 && x<=122){
        cout<<"given character is small alphabet";
    }
    else {
        cout<<"given character is not an alphabet";
    }

       // WE CAN ALSO WRITE ABOVE CODE LIKE THIS


/*      if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<"given character is an alphabet";
        }
        else {
        cout<<"given character is not an alphabet";
        }                                                */

}