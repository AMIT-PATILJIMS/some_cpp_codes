Longest Even Length Substring such that Sum of First and Second Half is same

question link: https://www.geeksforgeeks.org/longest-even-length-substring-sum-first-second-half/     

#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;

	while(t--){
		string str;
		cin>>str;

		int maxlen = 0;

		for(int i=0;i<str.size();i++){
			for(int j=i+1;j<str.size();j=j+2){
				int length = j-i+1;

				int leftsum=0;
				int rightsum=0;

				for(int k=0;k<length/2;k++){
					leftsum = leftsum + str[i+k] - '0';
					rightsum = rightsum + str[i+k+length/2] - '0'; 
				}

				if(leftsum == rightsum && maxlen < length){
					maxlen = length;
				}
			}
		}

		cout<<maxlen<<endl;
	}
	return 0;
}