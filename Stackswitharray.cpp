#include<iostream>
#define cap 10
using namespace std;
class Stack{
    private:
    int arr[cap];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int val){
        if (top==cap-1)
        {cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=val;}
    void pop(){
            if(top==-1){
                cout<<"stack empty";
                return;
            }
            cout<<"poped:"<<arr[top]<<endl;
            top--;
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