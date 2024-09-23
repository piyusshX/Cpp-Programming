#include<iostream>
#include<stack>
using namespace std;
// we can reverse a stack with the help of an extra array
void display(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    // reversing the stack
    int n = st.size();
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = st.top();
        st.pop();
    }
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    display(st);
}