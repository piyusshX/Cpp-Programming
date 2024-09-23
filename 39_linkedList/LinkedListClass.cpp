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
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
public:
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
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
        else if(idx==size-1) return tail->val;
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
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
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
    ll.insertAtHead(10); // { 10 -> NULL }
    ll.insertAtTail(20); // { 10 -> 20 -> NULL}
    ll.insertAtHead(30);
    ll.insertAtTail(50);
    ll.display();
    ll.insertAtIdx(1,15);
    ll.display();
    cout<<ll.getAtIdx(2)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();
}