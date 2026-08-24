#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int start,int end){
    vector<int>temp={};
    int i=start;
    int mid= start +(end-start)/2;
    int j=mid+1;
    while(i<=mid&&j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+start]=temp[idx];
    }
}
void recursive(vector<int>&arr,int start,int ed){
    int st=start;
    int end= ed;
    if(st<end){
        int mid=st+(end-st)/2;
        //left
        recursive(arr,st,mid);
        //right
        recursive(arr,mid+1,end);

        merge(arr,st,end);
    }
}
int main(){
    vector<int>vec={12,31,35,8,17,32};
    recursive(vec,0,vec.size()-1);
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
}