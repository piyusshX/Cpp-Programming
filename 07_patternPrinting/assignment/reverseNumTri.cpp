#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
//     for(int i=1;i<=n;i++){
//         int a=i;
//          for(int j=1;j<=i;j++){
//             cout<<a;
//             a--;
//         }
//         cout<<endl;
//     }

    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}