// Insertion Sort

#include<iostream>
using namespace std;

int main(){
    int arr[] = {40,20,60,10,50,30};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    for(int i=1;i<n;i++){
        key = arr[i];
        int j=i-1;
        while(key < arr[j]){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


/*
Time Complexity:

Best Case or Lower Bound : When the arrays are already sorted the no. of comparison is (n-1) for n elements.
 10,20,30,40,50,60
No. of comparison or Time Complexity is O(n)
No. of Swaps is O(1)


Worst case:
When arrays are arrange in decreasing order.

60 50 40 30 20 10

Comparison     swaps
0              0
1              1
2              2
3              3
4              4
5              5
.              .
.              .
.              .
n-1            n-1

this equation is n*(n-1)/2

O(n^2)


Average Case: it is similar to Worst Case
*/



/*
Insertion sort is in place sorting algorithm i.e it does not use any extra space

Insertion sort is stable i.e the relative position of elements does not change
1,5A,2,4,9,0,5B

after sorting
0,1,2,4,5A,5B,9
*/