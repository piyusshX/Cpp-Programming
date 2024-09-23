#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2; // ch == "*" || ch == "/"
}
int solve(int v1, char ch, int v2){
    if(ch=='+') return v1+v2;
    else if(ch=='-') return v1-v2;
    else if(ch=='/') return v1/v2;
    else return v1*v2;
}
int main(){
    string s = "2+6*4/8-3";
    int n = s.size();
    // we need two stacks to solve it
    stack<int> val; // for storing integer values
    stack<char> op; // for storing operator 
    for(int i=0;i<n;i++){
        if(s[i]>=48 && s[i]<=57) { // s[i] -> digit
            val.push(s[i]-48);
        }
        else{ // s[i] -> operator -> + , - , * , /
            if(op.size()==0 || prio(s[i]) > prio(op.top())) op.push(s[i]);
            else{ // prio(s[i]) <= prio(op.top())
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                    // ans = val1 op val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,ch,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // operator stack can still have some values 
    // so make it empty
    while(op.size()>0){
        // work
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,ch,val2);
        val.push(ans);
    }
    cout<<val.top();
}