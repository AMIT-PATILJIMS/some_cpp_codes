//https://www.geeksforgeeks.org/evaluate-a-boolean-expression-represented-as-string/

// this solution is implemented by me It may have some bugs.

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="1C1B1B0A0";
	
	int ans=1;
	for(int i=0;i<str.size();i++){
	        int x=str[i-1]-'0';
	        int y=str[i+1]-'0';
	        
	        switch(str[i]){
	            case 'A':
	            ans=(ans)&&(x&&y);
	            break;
	            
	            case 'B':
	            ans=(ans)||(x||y);
	            break;
	            
	            case 'C':
	            ans=(ans)^(x^y);
	            break;
	        }
	}
	
	cout<<ans;
	
	return 0;
}