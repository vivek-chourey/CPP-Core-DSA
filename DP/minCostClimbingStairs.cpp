// https://leetcode.com/problems/min-cost-climbing-stairs/submissions/827912300/

// //using recursion and memoization   On   On

// class Solution {
// public:
//     int solve(vector<int>& cost, vector<int> &dp, int i ){
        
//         if(i==0 || i==1){
//             return cost[i];
//         }
        
//         if(dp[i]!= -1){
//             return dp[i];
//         }
        
//         dp[i] = cost[i] + min(solve(cost, dp, i-1), solve(cost, dp, i-2));
        
//         return dp[i];
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
        
//         int n = cost.size();
//         vector<int> dp(n+1, -1);
        
//         int ans = min( solve(cost, dp, n-1), solve(cost, dp, n-2));
        
//         return ans;
//     }
// };


// //using tabulation      On  On

// class Solution {
// public:
    

//     int solve(vector<int>& cost, int n ){
        
//        vector<int> dp(n+1, -1);
        
//         dp[0]= cost[0];
//         dp[1]= cost[1];

//         for(int i=2; i<n ;i++){

//             dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
//         }
        
//         return min(dp[n-1], dp[n-2]);
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
        
//         int n = cost.size();
//         // vector<int> dp(n+1, -1);
        
//         return solve(cost, n);
//     }
// };


// //space optimized(only variables)   On  O1

// class Solution {
// public:

//     int solve(vector<int>& cost, int n ){
        

//         int prev1 = cost[1];
//         int prev2 = cost[0];

//         for(int i=2; i<n ;i++){

//             int curr = cost[i] + min(prev1, prev2);
//             prev2 = prev1;
//             prev1 = curr;
//         }
        
//         return min( prev1, prev2);
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
        
//         int n = cost.size();
        
//         return solve(cost, n);
//     }
// };