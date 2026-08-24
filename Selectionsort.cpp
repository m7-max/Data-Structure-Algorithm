#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

int main(){
    int arr[]={9,3,7,5,6,2,8,4,1};
    SelectionSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}