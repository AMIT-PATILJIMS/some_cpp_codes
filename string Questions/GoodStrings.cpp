A Good String is a string which contains only vowels (a,e,i,o,u) . Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.

#include<iostream>
#include<string>
#include<climits>

using namespace std;
int main(){
	string str;
	cin>>str;

	int count=0;
	int ans=INT_MIN;

	for(int i=0;i<str.size();i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			count++;
			ans=max(ans,count);
		}
		else{
			count=0;
		}
		ans=max(ans,count);
	}

	cout<<ans;
	return 0;
}