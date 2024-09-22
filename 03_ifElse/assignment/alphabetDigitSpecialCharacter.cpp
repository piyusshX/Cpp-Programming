#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"enter character : ";
    cin>>x;

/*  int y = (int)x;
    if((y>=65 && y<=90) || (y>=97 && y<=122)) cout<<"it is alphabet";
    else if(y>=48 && y<=57) cout<<"it is digit";
    else cout<<"it is special character"; */

    if((x>='A' && x<='Z') || (x>='a' && x<='z')) cout<<"it is alphabet";
    else if(x>='0' && x<='9') cout<<"it is digit";
    else cout<<"it is special character";

    
}