// Find the frequency of each word in a sentence

#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

int main(){
    char a[] = "i am amit patil i";
    char delim[] = " ";
    
    char *token = strtok(a,delim);
    
    unordered_map<string,int>mp;
    
    while(token){
        mp[token]++;
        token = strtok(NULL,delim);
    }
    
    
    
    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}