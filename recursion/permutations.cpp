//https://leetcode.com/problems/permutations/submissions/


// class Solution {
    
// private:
//     void solve(vector<int> nums, int index, vector<vector<int>>& ans){
        
//         if(index>=nums.size()){
//             ans.push_back(nums);         //end of recursion store answer
//             return;
//         }
        
//         for(int i=index;i<nums.size();i++){
            
//             swap(nums[i],nums[index]);     //swap elements for permutations
//             solve(nums,index+1,ans);         //recursive call
//             swap(nums[i],nums[index]);    //backtracking restoring order of "nums" before proceeding to next iteration 
//         }
//     }
    
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
        
//         vector<vector<int>> ans;
//         int index=0;
//         solve(nums,index,ans);
        
//         return ans;
        
//     }
// };