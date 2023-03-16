//https://leetcode.com/problems/valid-palindrome/submissions/

// class Solution {
// public:
//     bool isvalid(char ch){
//         if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
//             return true;
//         }   
       
//             return false;
//     }
//     char tolowercase(char c){
//         if((c>='a'&&c<='z')||(c>='0'&&c<='9'))
//             return c;
//         else
//             return c-'A'+'a';    //converting uppercase to lower using ASCII value operation
//     }
//     bool ispalindrome(string st){
//         int s=0;
//         int e=st.length()-1;
        
//         while(s<e){
//             if(st[s]!=st[e]){
//                 return false;
//             }
//             else{
//                 s++;
//                 e--;
//             }
//         }
//         return true;
        
//     }
    
    
//     bool isPalindrome(string s) {
//         string temp;
        
//         for(int i=0;i<s.length();i++){
//             if(isvalid(s[i])){
//                 temp.push_back(tolowercase(s[i]));
//             }
//         }
               
//         return ispalindrome(temp);     
//     }
// };