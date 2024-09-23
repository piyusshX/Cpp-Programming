#include<iostream>
#include<stack>
using namespace std;
int main(){
    // STL -> Standard Template Library
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // printing stack in reverse order -> emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // To avoid emtying stack we'll use extra stack
    stack<int> temp; // using Extra Space = O(n) 
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    // putting elements back from temp to st in stack
    while(temp.size()>0){
        // to print stack in normal order
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    cout<<st.size()<<endl; // stack is back to normal
}