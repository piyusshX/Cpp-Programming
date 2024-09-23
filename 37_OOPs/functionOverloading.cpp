#include<iostream>
#include<string>
using namespace std;
// function overloading ki help se hum koi do ya do se zada functions ka
// same name rak sakte hai but unn je parameters alag hona chahea.
void add(int a, int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<a+20<<endl;
}
int main(){
    add(55,6);
    add(6);
}