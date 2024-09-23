#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next; // pointer
    Node(int val){ // LinkedList Node
        this->val = val;
        this->next = NULL; 
    }
};
int main(){
    // 10, 20, 30, 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming LinkedList or Linking Nodes
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout<<(a.next)->val<<endl; // value of b using a
    // cout<<((a.next)->next)->val<<endl; // value of c using a
    // cout<<(((a.next)->next)->next)->val; // value of d using a

    // printing all the elements of linked list
    Node temp = a; 
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}