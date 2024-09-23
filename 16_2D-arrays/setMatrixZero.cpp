#include<iostream>
#include <vector>
using namespace std;
int main(){
        int m,n;
        cout<<"enter rows : ";
        cin>>m;
        cout<<"enter column : ";
        cin>>n;
        vector< vector<int> > matrix(m,vector<int> (n));
        cout<<"enter elements : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
        }
        vector<int> row;
        vector<int> col;
        //finding 0s row and col
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        //filling rows and columns with 0s
        int p = row.size();
        int q = col.size();
        //rows
        for(int i = 0 ; i < p ; i++){
            for(int j = 0 ; j < n ; j++){
                matrix[row[i]][j] = 0;
            }
        }
        //column
        for(int j = 0 ; j < q ; j++){
            for(int i = 0 ; i < m ; i++){
                matrix[i][col[j]] = 0;
            }
        }
        // printing
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
}