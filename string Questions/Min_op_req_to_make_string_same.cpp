//https://www.geeksforgeeks.org/minimum-rotations-required-get-string/

// This is a brute force solution Having high complexity

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[]="ababab";
    int n=strlen(str);
    char temp[n];
    
    strcpy(temp,str);
    
    int c=0;
    
     n = strlen(temp);
    
    while(1){
        char x=temp[0];
        for(int i=0;i<n-1;i++){
            temp[i] = temp[i+1];
        }
        temp[n-1] = x;
        
        c++;
        
        int val = strcmp(str,temp);
        
        if(val == 0){
            break;
        }
        
    }
    
    cout<<c;
    return 0;
}