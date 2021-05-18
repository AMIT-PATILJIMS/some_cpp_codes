//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#

// Actually This question needs some improvement
// It is giving wrong o/p


#include<bits/stdc++.h>
using namespace std;


void rever(string &s,int i,int j){
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
 
 
string reverseWords(string s) 
{
    rever(s,0,s.size());

    int i=0;
        
    for(int j=0;j<s.size();j++){
        if(s[j] == ' '){
            rever(s,i,j-1);
            i=j+1;
        }
    }
    
    return s;
}

int main(){
    string str="i like this program very much";
    cout<<reverseWords(str);
    return 0;
}