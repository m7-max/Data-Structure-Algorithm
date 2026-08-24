#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        next=NULL;
        data=val;
    }
};

class list{
    Node *head;
    Node *tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=NULL;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void pop_back(){
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete(tail);
        tail=temp;
    }
};


int main(){
    list Mylist;
    Mylist.push_front(1);
    Mylist.push_front(2);
    Mylist.push_back(3);
    Mylist.push_back(4);
    Mylist.printLL();
    Mylist.pop_back();
    Mylist.printLL();
}