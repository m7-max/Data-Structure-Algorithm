#include <iostream>
#include <vector>
using namespace std;

// Node structure for linked list bins
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void binSort(int arr[], int n, int maxVal) {
    // 1. Create an array of pointers for bins (size maxVal + 1)
    // Initialized to nullptr
    vector<Node*> bins(maxVal + 1, nullptr);

    // 2. Scatter: Distribute array elements into their respective bins
    for (int i = 0; i < n; i++) {
        int key = arr[i];
        Node* newNode = new Node(key);
        
        // Insert at the head of the bin's linked list
        newNode->next = bins[key];
        bins[key] = newNode;
    }

    // 3. Gather: Collect elements back from bins into the original array
    int idx = 0;
    for (int i = 0; i <= maxVal; i++) {
        Node* current = bins[i];
        while (current != nullptr) {
            arr[idx++] = current->data;
            Node* temp = current;
            current = current->next;
            delete temp; 
        }
    }
}

int main() {
    int arr[] = {4, 2, 0, 4, 1, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    binSort(arr, n, maxVal);

    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}