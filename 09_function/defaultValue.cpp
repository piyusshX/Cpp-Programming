#include<iostream>
using namespace std;
void fun(int x=8, int y=6) // 8 and 6 are default values
{ 
    cout<<x<<" "<<y<<endl;
}
void ex(int x=55, float y=9.4){ 
    cout<<x<<" "<<y<<endl;
}
int main(){
    fun(); // agar hum koi value nhi dege to default aayegi
    fun(4,3);
    fun(3);
    ex();
    ex(22,55.6);
}