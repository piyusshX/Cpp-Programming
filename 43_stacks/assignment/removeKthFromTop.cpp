#include<iostream>
#include<stack>
using namespace std;
void removeKthFromTop(stack<int>& st, int k){
    stack<int> temp;
    int n = st.size()-k;
    while(st.size()>n){
        temp.push(st.top());
        st.pop();
    }
    temp.pop(); // for removing the kth element from top
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void displayRec(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRec(st);
    st.push(x);
    cout<<x<<" ";
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRec(st);
    cout<<endl;
    removeKthFromTop(st,2);
    displayRec(st);
}