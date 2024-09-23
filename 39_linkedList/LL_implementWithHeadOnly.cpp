#include<iostream>
using namespace std;
class Node{ // User defined datatype
public:
    int val;
    Node* next; // pointer
    Node(int val){ // LinkedList Node
        this->val = val;
        this->next = NULL; 
    }
};
class LinkedList{ // User defined data structure
public:
    Node* head;
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }
public:
    void insertAtTail(int val){
        Node* t = new Node(val);
        if(size==0) head = t;
        else {
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = t;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx > size || idx < 0) cout<<"Invalid index"<<endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx>=size || idx<0){
            cout<<"invalid index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(idx>=size || idx<0){
            cout<<"invalid index!"<<endl;
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll; // { }
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtHead(30);
    ll.insertAtTail(50);
    ll.display();
    ll.insertAtIdx(1,15);
    ll.display();
    ll.insertAtIdx(4,155);
    ll.display();
}