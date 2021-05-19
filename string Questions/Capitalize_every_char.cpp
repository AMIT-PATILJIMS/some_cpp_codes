// Capitalize the character after every white space

i/p
hello i am amit patil

o/p
Hello I Am Amit Patil

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[]="hello i am amit"; //Hello I Am Amit
    
    str[0] = str[0]^32;
    
    for(int i=0; i<strlen(str)-1; i++){
        if(str[i]==' '){
            str[i+1] = str[i+1]^32;
        }
    }
    
    cout<<str;
	return 0;
}