#include<iostream>
using namespace std;
void maxheapify(int arr[],int n,int i){
    int left=i*2+1;
    int right=i*2+2;
    int large=i;
    if (left < n && arr[left] > arr[large]) {
        large = left;
    }
    if (right < n && arr[right] > arr[large]) {
        large = right;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        maxheapify(arr,n,large);
    }
}
void buildheap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i);
    }
}
void HeapSort(int arr[],int n){
    buildheap(arr,n);
    for(int i=n-1;i>=0;i--){
        swap(arr[0], arr[i]);
        maxheapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    HeapSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}