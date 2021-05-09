https://www.geeksforgeeks.org/run-length-encoding/


#include<iostream>
#include<string.h>
using namespace std;

void RunLengthEncoding(char *str){
    int n = strlen(str);
    
    for(int i=0;i<n;i++){
        int c=1;
        while(str[i] == str[i+1] && i<n-1){
            c++;
            i++;
        }
        cout<<str[i]<<c;
    }
}

int main(){
    char str[] = "geekkss";
    RunLengthEncoding(str);
    return 0;
}