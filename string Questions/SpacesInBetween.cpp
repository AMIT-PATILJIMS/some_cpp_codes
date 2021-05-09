Sample Input

IAmACompetitiveProgrammer

Sample Output

I
Am
A
Competitive
Programmer



#include<iostream>
#include<string.h>

using namespace std;
int main(){
	char a[1000];
	cin>>a;

	for(int i=0;i<strlen(a);i++){
		cout<<a[i];
		if(a[i+1]>=65 && a[i+1]<=90){
			cout<<"\n";
		}
	}
	return 0;
}