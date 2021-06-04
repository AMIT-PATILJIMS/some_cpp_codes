//https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1#

//print the LPS

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

string longestPalinSubseq(string s1){
    string s2;
    s2 = s1;
    
    reverse(s2.begin(),s2.end());
    
    int n=s1.size();
    int m=s2.size();
    
    int t[n+1][m+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1] == s2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            
            else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    
    int i=n;
    int j=m;
    
    string str;
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            str.push_back(s1[i-1]);
            i--;
            j--;
        }
        
        else{
            if(t[i-1][j] > t[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    
    reverse(str.begin(),str.end());
    return str;
}
int main(){
	string str = "bbabcbcab";
	
	cout<<longestPalinSubseq(str);
	
	return 0;
}