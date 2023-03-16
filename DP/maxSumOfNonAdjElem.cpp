// https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// //recursion + memoization  On On

// #include <bits/stdc++.h> 
// int solve(vector<int> &nums, int n, vector<int> &dp){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return nums[0];
//     }
    
//     if(dp[n]!=-1){
//         return dp[n];
//     }
     
//     int inc = solve(nums, n-2, dp) + nums[n];
//     int exc = solve(nums, n-1, dp) + 0;
//     dp[n]= max(inc, exc);
//     return dp[n];
// }
// int maximumNonAdjacentSum(vector<int> &nums){
//     int n = nums.size();
//     vector<int> dp(n+1, -1);
//     return solve(nums, n-1, dp);
// }

// //tabulation    On On


// #include <bits/stdc++.h> 
// int solve(vector<int> &nums, int n){

//     vector<int> dp(n+1, 0);
//     dp[0] = nums[0];
    
//     for(int i =1; i<=n; i++){
        
//             dp[i]= max(dp[i-2] + nums[i] , dp[i-1]);
//     }
//     return dp[n];
// }
// int maximumNonAdjacentSum(vector<int> &nums){
//     int n = nums.size();
//     return solve(nums, n-1);
// }

// // space optimised using variables only On O1

// #include <bits/stdc++.h> 
// int solve(vector<int> &nums, int n){


//     int prev2 = 0;
//     int prev1 = nums[0];
//     for(int i =1; i<=n; i++){
        
//             int ans = max(prev2 + nums[i] , prev1);
//             prev2 = prev1;
//             prev1 = ans;
//     }
//     return prev1;
// }
// int maximumNonAdjacentSum(vector<int> &nums){
//     int n = nums.size();
//     return solve(nums, n-1);
// }