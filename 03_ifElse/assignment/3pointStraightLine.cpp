#include <iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"enter cordinate of 1st point (x1) : ";
    cin>>x1;
    cout<<"enter cordinate of 1st point (y1) : ";
    cin>>y1;
    cout<<"enter cordinate of 2nd point (x2) : ";
    cin>>x2;
    cout<<"enter cordinate of 2nd point (y2) : ";
    cin>>y2;
    cout<<"enter cordinate of 3rd point (x3) : ";
    cin>>x3;
    cout<<"enter cordinate of 3rd point (y3) : ";
    cin>>y3;

    float m1 = (y2-y1)/(x2-x1);  // collinearity of three point -> 
    float m2 = (y3-y2)/(x3-x2);  // slope of AB = slope of BC

    if(m1==m2) cout<<"all points lies in a straight line";
    else cout<<"points do not lie in a straight line";

}1