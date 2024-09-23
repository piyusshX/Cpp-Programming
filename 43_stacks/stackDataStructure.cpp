#include<iostream>
#include<stack>
using namespace std;
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
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val); // for adding the val at bottom
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtIdx(stack<int>& st, int idx, int val){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void removeAtBottom(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    temp.pop(); // for removing the bottom element
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void removeAtIdx(stack<int>& st, int idx){
    stack<int> temp;
    while(st.size>idx){
        temp.push(st.top());
        st.pop();
    }
    temp.pop(); // for removing the value of the idx
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    pushAtBottom(st,5);
    display(st);
    pushAtIdx(st,3,25);
    display(st);
    removeAtBottom(st);
    display(st);
    removeAtIdx(st,2);
    display(st);
}