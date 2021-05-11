Check if the binary representation of a number is palindrome or not.

Question Link : https://www.geeksforgeeks.org/check-binary-representation-number-palindrome/

Note Question is only to understand the problem statement

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


bool f(int n)
{
   int a[40];
   int i=0;
   while(n)
   {
       if(n&1)
       a[i]=1;
       else
       a[i]=0;
       n>>=1;
       i++;
   }
   int l=0,r=i-1;
   while(l<r)
    {
        if(a[l]!=a[r])
        return false;
        l++;r--;
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(f(n))
        cout<<"true";
        else
        cout<<"false";
        cout<<endl;
    }

    return 0;
}