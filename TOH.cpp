#include<iostream>
using namespace std;

void TowerofHanoi(int n,char src,char aux,char dest){
    if(n==1){
        cout<<"Move disk 1 from"<<src<<"to"<<dest<<"\n";
        return;
    }
    //step1
    TowerofHanoi(n-1,src,dest,aux);
    //step2
    cout<<"Move disk"<<n<<"from"<<src<<"to"<<dest<<"\n";
    //step 3
    TowerofHanoi(n-1,aux,src,dest);
}
int main() {
    int n = 3; // Number of disks
    TowerofHanoi(n, 'A', 'B', 'C'); // A = source, B = auxiliary, C = destination
    return 0;
}