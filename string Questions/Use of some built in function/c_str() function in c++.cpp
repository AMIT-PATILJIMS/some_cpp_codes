// The use of c_str() function in c++.
// It is used to convert string to character arrays.


#include<iostream>
#include<string.h>
using namespace std;


int main(){
    
string str="geeks";
int n=str.size();

char s[n];

strcpy(s,str.c_str());

cout<<s;
return 0;
}