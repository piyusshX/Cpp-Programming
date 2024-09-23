#include <iostream>
using namespace std;
int main(){
    // roll no, marks
    // number of students = 4
    int arr[2][4]; 
    // first row = roll no
    // 2nd row = marks
    cout<<"enter roll no of 4 students : ";
    for(int j=0;j<4;j++){
        cin>>arr[0][j];
    }
    cout<<"enter marks : ";
    for(int j=0;j<4;j++){
        cin>>arr[1][j];
    }

    // print 
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}