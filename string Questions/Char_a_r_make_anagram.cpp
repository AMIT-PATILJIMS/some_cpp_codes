Sonu and Titu have two Strings. They want to make their strings anagrams of each other. They can either delete a character from string of Titu and add a character to the string of Sonu. Find the minimum number of operations required to make the strings anagrams of each other.


Sample Input
1
abde
edg

Sample Output
3


Note : This Code is not Working with Character arrays.

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
		string str1,str2;
		cin>>str1>>str2;

		int freq[26]={0};

		for(int i=0;i<str1.size();i++){
			freq[str1[i]-'a']++;
		}


		for(int i=0;i<str2.size();i++){
			freq[str2[i]-'a']--;
		}

		int count=0;

		for(int i=0;i<26;i++){
			if(freq[i]!=0){
				count += abs(freq[i]);
			}
		}

		cout<<count<<"\n";
	}
	return 0;
}