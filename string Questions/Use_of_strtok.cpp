// use of strtok function in c++

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[] = "i am amit patil";
    char delim[] = " ";
    
    char *token = strtok(a,delim);
    
    while(token){
        cout<<token<<endl;
        token = strtok(NULL,delim);
    }
    
    return 0;
}