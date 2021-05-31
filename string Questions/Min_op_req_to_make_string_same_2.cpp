// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/

// this is different question *(In one step you can choose any of the character)

    int minSteps(string s,string t){
        int c=0;
        int freq[26] = {0};
        
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        
        for(int i=0;i<t.size();i++){
            freq[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++){
            if(freq[i] != 0){
                c=c+abs(freq[i]);
            }
        }
        return c/2;
    }


