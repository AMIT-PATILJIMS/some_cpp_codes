Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.



#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int max_so_far = INT_MIN;

	for(int i=n-1;i>=0;i--){
		if(max_so_far <= arr[i]){
			max_so_far = arr[i];
		}

		if(arr[i] >= max_so_far){
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}