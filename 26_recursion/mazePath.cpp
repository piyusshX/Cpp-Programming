#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec); // right
    int downways = maze(sr+1,sc,er,ec); // down
    return rightways + downways;
}
void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R'); // right
    printPath(sr+1,sc,er,ec,s+'D'); // down
}
int maze2(int row, int col){ // with 2 variables
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways = maze2(row,col-1); // right
    int downways = maze2(row-1,col); // down
    return rightways + downways;
}
void printPath2(int row, int col, string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    printPath2(row,col-1,s+'R'); // right
    printPath2(row-1,col,s+'D'); // down
}
int main(){
    // cout<<maze(1,1,3,3);
    // printPath(1,1,3,3,"");
    // cout<<maze2(3,3);
    printPath2(3,3,"");
}