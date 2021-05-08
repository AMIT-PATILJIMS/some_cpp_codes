Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

Sample Input
acb
Sample Output
a2c-1b




#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char str[100];
	cin>>str;
	int n = strlen(str);
	
	/*
	for(int i=0;i<str.size()-1;i++){
		cout<<str[i]<<str[i+1]-str[i];
	}

	cout<<str[str.size()-1];
	*/


	
	for(int i=0;i<n-1;i++){
		cout<<str[i]<<str[i+1]-str[i];
	}

	cout<<str[n-1];
	
	return 0;
}