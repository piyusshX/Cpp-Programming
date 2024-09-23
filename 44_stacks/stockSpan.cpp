#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,70,60,75,85}; // stock prices -> idx represent day
        int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // previous greater element idx
    stack<int> st;
    int pgi[n];
    pgi[0] = 1; 
    st.push(0);
    for(int i=1;i<n;i++){
        // pop all the elements smaller than arr[i]
        while(st.size()!=0 && arr[i]>=arr[st.top()]){
            st.pop();
        } 
        // mark the ans in nge array
        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();
        pgi[i] = i - pgi[i]; // stock span
        // push arr[i] in stack
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;
}