#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int>&vec,int low,int high){
    int i=low;
    int j=high;
    int target=vec[low];
    while(i<j){
        while(vec[i]<=target&&i<high){
            i++;
        }
        while(vec[j]>target&& j>=low){
            j--;
        }
        if(i<j){
            swap(vec[i],vec[j]);
        }
    }
    swap(vec[low],vec[j]);
    return j;
}
void Quicksort(vector<int>&vec,int low,int high){
    
    if(low<high){
        int j=Partition(vec,low,high);
        Quicksort(vec,low,j-1);
        Quicksort(vec,j+1,high);
    }
}

int main(){
    vector<int>vec={9,3,7,5,6,2,8,4,1};
    Quicksort(vec, 0, vec.size() - 1);

    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}