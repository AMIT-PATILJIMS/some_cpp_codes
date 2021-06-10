#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        return -1; // when we encounter ( opening bracket
}

string infxtopsfx(string str){

    stack<char>s;
    string res;

    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            res=+str[i];
        }
        else if(str[i]=='('){
            s.push(str[i]);
        }

        else if(str[i]==')'){
            while(!s.empty() && str[i]!='('){
                res+=s.top();
                s.pop();
            }

            if(!s.empty()){
                s.pop();
            }
        }
        else{
            while(!s.empty() && prec(s.top()) > prec(str[i])){
                res+=s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }

    while(!s.empty()){ //stack is not empty
        res+=s.top();
        s.pop();
    }

    return res;
}

int main(){

    string str="(a-b/c)*(a/k-l)";
    cout<<infxtopsfx(str);
    return 0;
}
