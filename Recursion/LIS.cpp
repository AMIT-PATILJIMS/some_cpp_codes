// Longest increasing subsequence Recursive



#include<algorithm>
#include<iostream>

using namespace std;

int lis(int arr[],int i,int n){
    if(i == n){
        return 1;
    }
    else if(arr[i] < arr[i+1]){
        return max(1 + lis(arr,i+1,n),lis(arr,i+1,n));
    }
    else{
        return lis(arr,i+1,n);
    }
}

int main(){
    int arr[] = {50,3,10,7,40,80};

    int n=sizeof(arr)/sizeof(int);
    cout<<lis(arr,0,n);
    return 0;
}
