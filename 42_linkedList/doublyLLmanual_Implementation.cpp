#include<iostream>
using namespace std;
class Node{ // DLL Node
public:
    int val;
    Node* next;
    Node* prev; // extra for DLL
    Node(int val){ // LinkedList Node
        this->val = val;
        this->next = NULL; 
        this->prev = NULL;
    }
};
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void revDisplay(Node* tail){
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
int main(){
    // NULL <- 10 <-> 20 <-> 30 <-> 40 <-> 50 -> NULL
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    // forward connection
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // backward connection
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    // printing 
    display(a); // forward printing
    revDisplay(e); // reverse printing
}