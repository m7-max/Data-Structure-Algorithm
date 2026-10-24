#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node* head;
    Node*tail;
    public:
    Queue(){
        head=NULL;
        tail=NULL;
    }
    void dequeue(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        if (head == tail) {
            head = tail = NULL;
        } else {
            head = head->next;
            tail->next = head; 
        }
        cout << temp->data << " dequeued\n";
        delete temp;
    }
    void enqueue(int val){
        if(head==NULL){
            Node*newNode=new Node(val);
            head=tail=newNode;
            tail->next=head;
        }
        else{
            Node* newNode= new Node(val);
            tail->next=newNode;
            tail=newNode;
            tail->next=head;
        }
        cout<<tail->data<<" enueued \n";
    }
    void print() {
        if (head == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = head;
        cout << "Queue elements: ";
        
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head); 
        cout << endl;
    }
};
int main(){
    Queue q;
    int arr[]={1,2,3,4,5,6,77};
    for(int i=0;i<7;i++){
        q.enqueue(arr[i]);
    }
    q.print();
    q.dequeue();
    q.dequeue();
}