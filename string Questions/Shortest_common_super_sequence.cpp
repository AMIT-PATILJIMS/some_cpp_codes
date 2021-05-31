// https://www.geeksforgeeks.org/shortest-common-supersequence/

/*

Input:   str1 = "geek",  str2 = "eke"
Output: 5
Explanation: 
String "geeke" has both string "geek" 
and "eke" as subsequences.


the logic is 

at the worst case we can combine both the strings(n+m) and substract the LCS.

i.e 
(m+n) - LCS();

*/
 