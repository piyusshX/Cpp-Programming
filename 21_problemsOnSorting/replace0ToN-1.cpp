#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[6] = {12,45,75,22,13,11};
    int n=6;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    vector<int> v(n,0); // visited array
    int x=0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(arr[j]<min){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; // element is visited
        x++;
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}