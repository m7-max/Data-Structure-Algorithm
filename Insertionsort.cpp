#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

int main(){
    int arr[]={9,3,7,5,6,2,8,4,1};
    insertionsort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}