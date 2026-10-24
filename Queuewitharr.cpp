#include<iostream>
#define cap 10
using namespace std;

class Queue{
    int arr[cap];
    int front;
    int rear;
    public:
    Queue(){
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if(rear==cap-1){
            cout<<"queue is full\n";
            return;
        }
        rear++;
        arr[rear]=val;
        if(front==-1){
            front=0;
        }
    }
    void dequeue(){
        if(front==-1||front>rear){
            cout<<"queue is empty\n";
            return;
        }
        cout<<"dequeue:"<<arr[front];
        front++;
        if(front>rear){
            front=-1;
            rear=1;
        }
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
}