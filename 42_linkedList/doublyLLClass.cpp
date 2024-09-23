#include<iostream>
using namespace std;
class Node{ // Doubly LinkedList Node
public:
    int val;
    Node* next;
    Node* prev; // extra
    Node(int val){ // LinkedList Node
        this->val = val;
        this->next = NULL; 
        this->prev = NULL;
    }
};
class DLL{ // User defined Doubly LinkedList data structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }
public:
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp; // extra
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
            temp->next->prev = t; // extra
            temp->next = t;
            t->prev = temp; // extra
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        head = head->next;
        if(head!=NULL) head->prev = NULL; // extra
        if(head==NULL) tail = NULL; // extra
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        if(head==tail){ // extra size  = 1
            head = tail = NULL; 
            return;
        }
        Node* temp = tail->prev; // extra
        temp->next = NULL; // extra
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
            temp->next->prev = temp; // extra
            size--;
        }
    }
    int getAtIdx(int idx){ // optimized than singly LL
        if(idx>=size || idx<0){
            cout<<"invalid index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){ 
                Node* temp = head;
                for(int i=1;i<=idx;i++){
                temp = temp->next;
                }
                return temp->val;
            }
            else { // idx >= size/2
                Node* temp = tail;
                for(int i=1;i<size-idx;i++){
                temp = temp->prev;
                }
                return temp->val;
            }
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display();
    list.insertAtIdx(2,25);
    list.display();
    cout<<list.getAtIdx(3)<<endl;
    list.deleteAtTail();
    list.display();
    list.deleteAtHead();
    list.display();
    list.deleteAtIdx(2);
    list.display();
}