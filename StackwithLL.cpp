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
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(top==NULL){
        top=newNode;
        return;
        }
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack empty";
            return;
        }
        Node* temp=top;
        top=top->next;
        cout<<"poped:"<<temp->data<<endl;
        delete temp;
    }
};
int main(){
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.pop();
    s.pop();
    s.pop();
}