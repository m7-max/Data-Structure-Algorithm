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
    public:
    Queue(){
        head=NULL;
    }
    void dequeue(){
        if(head==NULL){
            return;
        }
        if(head->next!=NULL){
        Node*temp=head;
        head=head->next;
        cout<<temp->data<<" Dequeued \n";
        delete temp;
        }
        else{
            return;
        }
    }
    void enqueue(int val){
        if(head==NULL){
            Node*newNode=new Node(val);
            head=newNode;
        }
        else{
            Node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            Node* newNode= new Node(val);
            temp->next=newNode;
            cout<<newNode->data<<" enueued \n";
        }
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
    Queue q;
    int arr[]={1,2,3,4,5,6,77};
    for(int i=0;i<7;i++){
        q.enqueue(arr[i]);
    }
    q.print();
    q.dequeue();
    q.dequeue();
}