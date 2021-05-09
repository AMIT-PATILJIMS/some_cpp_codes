Given a string and a character, remove all occurrences of that character from the string

#include<iostream>
#include<string.h>
using namespace std;

void Remove(char *str,char c){
    int j=0;
    
    for(int i=0;i<strlen(str);i++){
        if(str[i] != c){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    
    cout<<str;
}

int main(){
    char str[] = "geeksforgeeks";
    Remove(str,'e');
    return 0;
}