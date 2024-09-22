#include<iostream>
using namespace std;
float area(int r){
    float area = 3.14*r*r;
    return area;
}
int main(){
    int r;
    cout<<"enter radius of circle : ";
    cin>>r;
    cout<<area(r);
}