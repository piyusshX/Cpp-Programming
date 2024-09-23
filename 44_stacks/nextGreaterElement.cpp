#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Using Stacks : pop, ans, push & reverse traverse
    // SC = O(n) , TC = O(n)
    stack<int> st;
    int nge[n];
    nge[n-1] = -1; // last element of array has no NGE
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        // pop all the elements smaller than arr[i]
        while(st.size()!=0 && arr[i]>=st.top()) st.pop();
        // mark the ans in nge array
        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();
        // push arr[i] in stack
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}