// Longest updated substring

// Naive approach O(n^2)

#include<bits/stdc++.h>

using namespace std;

int main(){
    string str="ax";
    int c;
    int mx = INT_MIN;
    
    string s;
    
    string ans;
    
    for(int i=0;i<str.size();i++){
        c=0;
        s="";
        
        for(int j=i;j<str.size();j++){
            if(str[i] == str[j]){
                c++;
                s = s + str[j];
            }
        }
        
        if(mx <= c){
            mx=c;
            ans=s;
        }
    }
    
    cout<<mx;
    cout<<endl;
    cout<<ans;
	return 0;
}