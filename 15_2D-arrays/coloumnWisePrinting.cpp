#include<iostream>
using namespace std;
int main(){
    int mat[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int j=0;j<3;j++){ // coloumn constant rahege row change hogi
        for(int i=0;i<3;i++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        }
}