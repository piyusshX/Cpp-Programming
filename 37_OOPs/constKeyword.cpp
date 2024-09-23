#include<iostream>
using namespace std;
// const -> Constant 
// const keyword use hota hai for making any variable and function Constant. Meaning 
// unnki value change nhi hogi and agar humne change karne ka try kiya to error show hoga.
// agar hum ki bhi cheez ko constant bana rahe hai to hume uski value tabhi declare karni padegi nhi to
// error show hoga. 
// But jab hum class banate hai and agar humne koi variable constant banaya hai to hum usse initilization
// ki help se initilize kar sakte hai but constructor ki help se nhi.
int main(){
    const int a = 5;
    // a = 10; // Giving error when we try to change it
    cout<<a<<endl;
}