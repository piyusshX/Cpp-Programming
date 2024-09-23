#include<iostream>
#include<vector>
using namespace std;
int bestClosingTime(string customers) {
    int n = customers.size();
    int pre[n+1]; // no of N before kth hour
    int suf[n+1]; // no of Y after and including kth hour
    pre[0] = 0;
    for(int i=0;i<n;i++){
        pre[i+1] = pre[i] + ((customers[i]=='N') ? 1 : 0);
    }
    suf[n] = 0;
    for(int i=n-1;i>=0;i--){
        suf[i] = suf[i+1] + ((customers[i]=='Y') ? 1 : 0);
    }
    // prenalty array = pre of N + suf of Y
    int minPen = n;
    for(int i=0;i<=n;i++){
        pre[i] += suf[i];
        int pen = pre[i];
        minPen = min(minPen,pen);
    }
    // earliest hour at which shop incur a minimum penalty
    for(int i=0;i<=n;i++){
        if(pre[i]==minPen) return i;
    }
    return n;
}
int main(){
    string s = "YYNY";
    cout<<bestClosingTime(s);
}