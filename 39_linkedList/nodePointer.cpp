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
void insertAtTail(int val, Node* head){
    Node* t = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = t;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    // printing 
    Node* temp = a;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
 // cout<<a->next->next->next->val;
    //    a->  b -> c  -> d  -> val;

    insertAtTail(50,a);
    Display(a);

}