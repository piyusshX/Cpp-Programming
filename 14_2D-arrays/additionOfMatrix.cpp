#include<iostream>
using namespace std;
int main(){
        int arr[2][3] = {1,2,3,4,5,6};
        int brr[2][3] = {1,2,3,4,5,6};
        //sum of two matrix
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                arr[i][j] = arr[i][j] + brr[i][j];
            }
        }
        //print 
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}