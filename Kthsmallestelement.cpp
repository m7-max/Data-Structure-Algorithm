#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&arr,int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot&&i<=high){
            i++;
        }
        while(arr[j]>pivot&&j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void Kth_smallest_element(vector<int>&arr,int low,int high,int k){
    int j=partition(arr,low,high);
    if(j==k){
        cout<<"Kth smallest element is:"<<arr[j]<<endl;
    }
    if(j<k){
        Kth_smallest_element(arr,j+1,high,k);
    }
    else if(j>k){
        Kth_smallest_element(arr,low,j,k);
    }
}

int main() {
    vector<int> arr = {10, 4, 5, 8, 6, 11, 26};
    int k = 3; // Find 3rd index smallest element
    Kth_smallest_element(arr, 0, arr.size() - 1, k);
    return 0;
}