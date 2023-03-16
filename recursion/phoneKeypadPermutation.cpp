//https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/


// class Solution {
// private:
//     void solve(string digits,int index,string output,vector<string>& ans,string map[]){
        
//         if(index>=digits.length()){          // base case
//             ans.push_back(output);
//             return;
//         }
        
//         int number = digits[index]-'0';      //extract the number from digits at index eg 2
//         string value = map[number];          //extract corresponding string mapped to it eg "abc"
        
//         for(int i =0;i<value.length();i++){          //loop for iterating each char in value string eg for a,for b,for c.
//             output.push_back(value[i]);              //eg push 'a'in output
//             solve(digits,index+1,output,ans,map);     //recursive call index incremented'
//             output.pop_back();                        //backtracking eg removing 'a'from output after returning from recursive call as next we will go for 'b' and we will need output empty.
//         }
//     }
    
    
// public:
//     vector<string> letterCombinations(string digits) {
        
//         vector<string> ans;
//         string output="";
//         int index=0;
//         string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
//         if(digits.length()==0){
//             return ans;
//         }
        
//         solve(digits,index,output,ans,map);
        
//         return ans;
//     }
// };