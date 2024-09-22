#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx=-1;
    int i = n-2;
    // finding pivot index 
    while(i>=0){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
        i--;
    }
    if(idx==-1){ // array is already is largest
        reverse(nums.begin(),nums.end());
    }
    else{// sorting after pivot
        int i=idx+1;
        int j=n-1;
        while (i<=j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        int idx2;
        for(int i=idx+1;i<n-1;i++){
            if(nums[i]>nums[idx]){
                idx2=i;
                break;
            }
        }
            int temp = nums[idx];
            nums[idx] = nums[idx2];
            nums[idx2] = temp;
    }
}
void display(vector<int>& nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(3);
    display(nums);
    nextPermutation(nums);
    display(nums);
}