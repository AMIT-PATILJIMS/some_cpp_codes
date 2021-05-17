// Sum of squares of n natural numbers

#include<iostream>
using namespace std;

int main(){
    int n=5;
    
    int i=1;
    int ans=0;
    
    for(int i=1;i<=n;i++){
        ans=ans+i*i;
    }
    
    cout<<ans<<endl;
    // another approach
    
    cout<<n*(n+1)*(2*n+1)/6;
    return 0;
}