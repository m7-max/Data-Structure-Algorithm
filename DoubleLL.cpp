#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class List{
    Node*head;
    // Node*tail;
    public:
    List(){
        head=NULL;
    }
    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head->prev = newNode;
        head=newNode;
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
    void pop_back(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        if (head->next == NULL) {
            cout << "deleted: " << head->data << endl;
            delete head;
            head = NULL;
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        if(temp->prev!=NULL){
        temp->prev->next=NULL;
        }
        cout<<"deleted:"<<temp->data;
        delete temp;
    }
    void pop_front(){
        if(head==NULL){
            return;
        }
        Node*temp=head;
        if (head->next == NULL) {
            cout << "deleted: " << temp->data << endl;
            delete temp;
            head = NULL;
            return;
        }
        head->next->prev=NULL;
        head=head->next;
        cout<<"deleted:"<<temp->data;
        delete temp;
    }
    void pop_val(int val){
        Node*temp=head;
        while(temp->data!=val){
            temp=temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        temp->next=NULL;
        temp->prev=NULL;
        cout<<"poped:"<<temp->data<<endl;
        delete temp;
    }
    void pop_idx(int idx) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    
    // Traverse to the node at index 'idx' (0-indexed)
    for (int i = 0; i < idx; i++) {
        if (temp == NULL) {
            cout << "Index out of bounds!" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Index out of bounds!" << endl;
        return;
    }

    // Case 1: Deleting the head node
    if (temp == head) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
    } 
    // Case 2: Deleting the tail node
    else if (temp->next == NULL) {
        temp->prev->next = NULL;
    } 
    // Case 3: Deleting a middle node
    else {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }

    cout << "popped: " << temp->data << endl;
    delete temp;
}
    void push_idx(int val,int idx){
        Node* newNode=new Node(val);
        Node*temp=head;
        for(int i=0;i<idx-2;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next->prev=newNode;
        temp->next=newNode;
        newNode->prev=temp;
    }
    void print(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
List Mylist;
    Mylist.push_front(1);
    Mylist.push_front(2);
    Mylist.push_back(3);
    Mylist.push_back(4);
    Mylist.print();
    Mylist.pop_val(3);
    Mylist.print();
    Mylist.pop_idx(1);
    Mylist.print();
    Mylist.pop_back();
    Mylist.pop_front();

}