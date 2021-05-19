// Strings are anagrams of each other or not

//https://practice.geeksforgeeks.org/problems/anagram-1587115620/1#


bool isAnagram(char str1[], char str2[]){
    int freq[256]={0};
    
    if(strlen(str1)>strlen(str2) || strlen(str1)<strlen(str2)){
        return 0;
    }
	
	for(int i=0;i<strlen(str1);i++){
	    freq[str1[i]-'a']++;
	}
	
	for(int i=0;i<strlen(str2);i++){
	    freq[str2[i]-'a']--;
	}
	
	for(int i=0;i<strlen(str1);i++){
	    if(freq[str1[i]-'a'] != 0){
	        return 0;
	    }
	}
	return 1;
}