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
void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int Size(Node* head){
    Node* temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
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
    Display(a);
    cout<<Size(a)<<endl;
}