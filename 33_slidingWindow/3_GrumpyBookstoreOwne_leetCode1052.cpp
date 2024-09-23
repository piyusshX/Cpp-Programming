#include<iostream>
#include<vector>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int min) {
    int n = customers.size();
    int idx = 0;
    int satLoss = 0; // Find the window where Loss of satisfaction is max
    for(int i=0;i<min;i++){
        if(grumpy[i]==1) satLoss += customers[i];
    }
    int i = 1, j = min, maxLoss = satLoss;
    while(j<n){
        if(grumpy[j]==1) satLoss += customers[j];
        if(grumpy[i-1]==1) satLoss -= customers[i-1];
        if(satLoss>maxLoss){
            maxLoss = satLoss;
            idx = i;
        }
        i++, j++;
    }
    for(i=idx;i<idx+min;i++){
        grumpy[i] = 0;
    }
    int maxSat = 0;
    for(i=0;i<n;i++){
        if(grumpy[i]==0) maxSat += customers[i];
    }
    return maxSat;
}
int main(){
    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    int min = 3;
    cout<<maxSatisfied(customers,grumpy,min);
}