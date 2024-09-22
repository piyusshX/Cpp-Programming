#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    int marks[n]; // 0 -> n-1
    //input
    cout<<"enter marks of students : ";
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    //output
    cout<<"Students with less than 35 marks : ";
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}