#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void count_sort(vector<int>&arr,int exp){
    int n= arr.size();
    vector<int>output(n);
    int count[10]={0};

    for(int i=0;i<n;i++){
        int digit= (arr[i]/exp)%10;
        count[digit]++;
    }

    for(int i=1;i<10;i++){
        count[i]+= count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        int digit=(arr[i]/exp)%10;
        output[count[digit]-1]=arr[i];
        count[digit]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

void radix_sort(vector<int>&arr){
    if(arr.empty()){
        return;
    }
    int max_val=*max_element(arr.begin(),arr.end());

    for(int exp=1;max_val/exp>0;exp*=10){
        count_sort(arr,exp);
    }
}

int main(){
    vector<int>vec={253,192,3,2,10,75,478,88};
    radix_sort(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}