// LCS using 1-DP

#include<algorithm>
#include<iostream>

using namespace std;

int lis(int arr[],int i,int n){
    int dp[n+1] = {1};

    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[i+1]){
            return dp[i] = max(1+dp[i+1],dp[i+1]);
        }
        else{
            return dp[i] = dp[i+1];
        }
    }
    return dp[n-1];
}

int main(){
    int arr[] = {10,22,9,33,21,50,41,60,80};

    int n=sizeof(arr)/sizeof(int);
    cout<<lis(arr,0,n);
    return 0;
}
