// https://leetcode.com/problems/string-compression/

// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i=0;
//         int ansInd=0;
//         int n = chars.size();
        
//         while(i<n){
            
//             int j=i+1;
//             while(j<n && chars[i]==chars[j]){
//                 j++;
//             }
            
//             chars[ansInd++]=chars[i];
//             int count = j-i;
            
//             if(count>1){
//                 string s = to_string(count);
//                 for(char ch: s){
//                    chars[ansInd++]=ch; 
//                 }
//             }
//             i=j;
//         }
//         return ansInd;
//     }
// };