// longest incresing sequence
#include<iostream>
using namespace std;

int LIS(int *arr,int n){
    int i,j,max = -1;
    int lis[n];
    
    for(int i=0;i<n;i++){
        lis[i] = 1;
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1){
                lis[i] = lis[j] + 1;
            }
        }
    }
    
    return lis[n-1];
}

int main(){
    int arr[] = {10,9,2,5,3,7,101,18};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<LIS(arr,n);
}