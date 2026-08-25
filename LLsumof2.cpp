#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node*head;
    Node*tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_back(int val){
        Node *newNode=new Node(val);
        tail->next=newNode;
        tail=newNode;
    }
    void findsum(){
        for(Node* temp=head;temp!=NULL;temp=temp->next){
            for(Node* curr1=head;curr1!=NULL;curr1=curr1->next){
                for(Node* curr2=head;curr2!=NULL;curr2=curr2->next){
            if(temp->data==(curr1->data+curr2->data)) {
                cout<<curr1->data<<"+"<<curr2->data<<"="<<temp->data<<endl;
            }
        }
        }
        }
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
};

int main(){
    List Mylist;
    Mylist.push_front(1);
    Mylist.push_front(2);
    Mylist.push_back(3);
    Mylist.push_back(4);
    Mylist.findsum();
}