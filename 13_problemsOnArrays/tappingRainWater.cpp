#include <iostream>
#include<vector>
using namespace std;
// not very optimize but easy to understand 
int trap(vector<int>& height) {
    int n=height.size();
    int pge[n] ; // previous gretest element
    int nge[n] ; // next greatest element
    // filling elements in pge
    pge[0] = -1;
    int maxi = height[0];
    for(int i = 1 ; i < n ; i++){
        pge[i]=maxi;
        if(maxi < height[i]) maxi = height[i];
    }
    // filling elements in nge
    nge[n-1] = -1;
    maxi = height[n-1];
    for(int i = n-2 ; i >= 0 ; i--){
        nge[i]=maxi;
        if(maxi < height[i]) maxi = height[i];
    }
    // make an array minimum of nge and pge
    for(int i=1;i<n-1;i++){
        pge[i] = min(pge[i],nge[i]);
    }
    //calculating water

    // compare elements of given array and new array and agar new array ka element chota hua to (given - new)=water hoga

    int water = 0;
    for(int i=1;i<n-1;i++){
        if(pge[i] > height[i]) water = water + (pge[i] - height[i]);
    }
    return water;
}

// optimize (iss me bus nge ko nikaalna and phir pge and nge ke min ko ek sath nikaal diya hai)
int trap2(vector<int>& height){
        int n=height.size();
        int pge[n] ; // previous gretest element
        // previous gretest element 
        pge[0] = -1;
        int maxi = height[0];
        for(int i = 1 ; i < n ; i++){
            pge[i]=maxi;
            if(maxi < height[i]) maxi = height[i];
        }
        // nge and minimum of  previous gretest element and next gretest element 
        pge[n-1] = -1;
        maxi = height[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            pge[i]=min(pge[i],maxi);
            if(maxi < height[i]) maxi = height[i];
        }

        // calculating water 

        // compare elements of given array and new array and agar new array ka element chota hua to (given - new)=water hoga

        int water = 0;
        for(int i=1;i<n-1;i++){
            if(pge[i] > height[i]) water = water + (pge[i] - height[i]);
        }
        return water;
}
int main(){
    vector<int> height = {4,2,0,3,2,5};
    cout<<trap(height)<<endl;
    cout<<trap2(height);
}