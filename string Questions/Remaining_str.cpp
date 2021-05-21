//https://practice.geeksforgeeks.org/problems/remaining-string3515/1#	

string printString(string &str, char ch, int count)
	{
	    int c=0;
	    int i;
	    
	    for(i=0;i<str.size();i++){
	        if(str[i] == ch && c<count){
	            c++;
	        }
	        
	        else if(c==count){
	            break;
	        }
	    }
	    string y=str.substr(i);
	    string x="Empty string";
	    if(y.size()>0){
	    return y;
	    }
	    
	    else{
	        return x;
	    }
	}