#include<iostream>
#include<stack>
using namespace std;
void pushAtBottomRec(stack<int>& st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottomRec(st,val);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);
    cout<<x<<" ";
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottomRec(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}