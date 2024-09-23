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
void displayRecursive(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayRecursive(head->next);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    displayRecursive(a);
}