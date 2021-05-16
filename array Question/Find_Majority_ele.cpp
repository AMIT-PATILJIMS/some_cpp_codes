//Question link : https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#

//Brute Force approach

#include<iostream>
using namespace std;

int main(){
    
    
    
    
    int arr[]={4,1,4,4,2};
    int n=sizeof(arr)/sizeof(int);
    
    int cnt;
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        if(cnt > n/2){
            cout<<arr[i]<<" ";
            break;
        }
    }
    return 0;
}




//Optimized approach
// Moore's Voting Algorithm


int majorityElement(int arr[], int n)
{
    int cnt=0;
    int ans;
    for(int i=0;i<n;i++){
        if(cnt==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    
    int f=0;
    
    for(int i=0;i<n;i++){
        if(ans == arr[i]){
            f++;
        }
    }
    
    if(f>n/2){
        return ans;
    }
    
    else{
        return -1;
    }
}