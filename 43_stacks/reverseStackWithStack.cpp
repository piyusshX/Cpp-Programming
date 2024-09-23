#include<iostream>
#include<stack>
using namespace std;
// for reversing a stack we need to transfer its elements to another stack and the resulting stack will be
// its reverse.
// But if we want to get reverse order in the orignal stack than we have to use another stack for it 
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
    stack<int> t1; // first temporary stack
    while(st.size()>0){
        t1.push(st.top());
        st.pop();
    }
    stack<int> t2; // second temporary stack
    while(t1.size()>0){
        t2.push(t1.top());
        t1.pop();
    }
    // put the elements of t2 back in st and the order will be reversed
    while(t2.size()>0){
        st.push(t2.top());
        t2.pop();
    }
    display(st); // order of stack is reversed
}