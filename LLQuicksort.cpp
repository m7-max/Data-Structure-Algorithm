#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr) {}
};
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}


void push_back(Node** head, Node** tail, int val) {
    Node* new_node = new Node(val);
    if (*head == nullptr) {
        *head = new_node;
        *tail = new_node;
        return;
    }
    (*tail)->next = new_node;
    new_node->prev = *tail;
    *tail = new_node;
}

Node* partition(Node* head, Node* end) {
    Node* pivot = head;
    Node* i = head;
    Node* j = end;

    while (true) {
        while (i != end && i->data < pivot->data) {
            i = i->next;
        }
        while (j != head && j->data > pivot->data) {
            j = j->prev;
        }
        if (i == j || i->prev == j) break;
        swap(i->data, j->data);
    }
    
    // Move pivot to its correct final place
    swap(pivot->data, j->data);
    return j;
}

int quickSelect(Node* head, Node* end, int k) {
    if (!head || !end) return -1;

    Node* pivot = partition(head, end);

    // Calculate 1-based position of pivot within [head, end] range
    int count = 1;
    for (Node* curr = head; curr != pivot; curr = curr->next) {
        count++;
    }

    if (count == k) {
        return pivot->data;
    } else if (k < count) {
        return quickSelect(head, pivot->prev, k);
    } else {
        return quickSelect(pivot->next, end, k - count);
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    push_back(&head,&tail, 11);
    push_back(&head,&tail, 2);
    push_back(&head,&tail, 9);
    push_back(&head,&tail, 3);
    push_back(&head,&tail, 7);
    push_back(&head,&tail, 15);

    // List contents: 15 -> 7 -> 3 -> 9 -> 2 -> 11
    // Sorted order: 2, 3, 7, 9, 11, 15

    int k = 4;
   
    cout << "The " << k << "-th smallest element is: " << quickSelect(head, tail, k) << endl;
    return 0;
}