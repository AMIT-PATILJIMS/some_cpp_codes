//Question link :  https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/


// Idea behind this program is two pointers
// When the array is sorted , Then in most of the cases the Two pointers Approach is used

#include<iostream>
using namespace std;

int main(){
    int n;
    int x;
    
    cin>>n>>x;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i=0;
    int j=n-1;
    
    
    while(i<j){
        if(arr[i] != x){
            i++;
        }
        
        if(arr[j] != x){
            j--;
        }
        
        if(arr[i]==x && arr[j]==x){
            cout<<i<<" "<<j;
            break;
        }
    }
    
    return 0;
}