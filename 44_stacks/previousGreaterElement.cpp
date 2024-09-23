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
    // Using Stacks : pop, ans, push & forward traverse
    // SC = O(n) , TC = O(n)
    stack<int> st;
    int pge[n];
    pge[0] = -1; // first element of array has no PGE
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        // pop all the elements smaller than arr[i]
        while(st.size()!=0 && arr[i]>=st.top()){
            st.pop();
        } 
        // mark the ans in nge array
        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();
        // push arr[i] in stack
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}