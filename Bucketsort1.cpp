#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucket_sort(vector<float>&arr){
    int n=arr.size();
    vector<vector<float>>Bucket(n);
    for(int i=0;i<arr.size();i++){
        int idx=arr[i]*n;
        Bucket[idx].push_back(arr[i]);
    }
    for(int i=0;i<Bucket.size();i++){
        sort(Bucket[i].begin(),Bucket[i].end());
    }
    int idx=0;
    for(int i=0;i<n;i++){
        for(float val:Bucket[i]){
            arr[idx++]=val;
        }
    }
}
int main(){
    vector<float>arr={0.32,0.67,2.43,0.75,1.23};
    bucket_sort(arr);
    for(float val:arr){
        cout<<val<<" ";
    }
}