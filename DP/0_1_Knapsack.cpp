// https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// //rec + memoization

// #include <bits/stdc++.h> 
// int solve(vector<int> &weight, vector<int> &value, int n, int W, vector<vector<int>> &dp){
    
//     if(n==0){
//         if(weight[n]<= W){
//             return value[n];
//         }else{
//             return 0;
//         }
//     }
//     if(dp[n][W]!= -1){
//         return dp[n][W];
//     }
//     int include = 0;
//     if(weight[n]<= W){
//         include = value[n] + solve(weight, value, n-1 , W-weight[n], dp);
//     }
//     int exclude = 0 + solve(weight, value, n-1 , W,dp);
    
//     dp[n][W] = max(include, exclude);
    
//     return dp[n][W];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
//     vector<vector<int>> dp(n, vector<int>(maxWeight + 1 , -1));
// 	int ans = solve(weight, value, n-1 , maxWeight, dp);
    
//     return ans;
// }

// // tabulation

// #include <bits/stdc++.h> 
// int solve(vector<int> &weight, vector<int> &value, int n, int W){
//     vector<vector<int>> dp(n, vector<int>(W + 1 , 0));
    
//     for(int w = weight[0]; w<=W;w++){
//         if(weight[0]<= W){
//             dp[0][w]= value[0];
//         }else{
//             dp[0][w]= 0;
//         }
//     }
    
//     for(int i=1;i<n;i++){
//         for(int j = 0;j<=W;j++){
//             int include = 0;
//             if(weight[i]<= j){
//                 include = value[i] + dp[i-1] [j-weight[i]];
//             }
//             int exclude = 0 + dp[i-1] [j];

//             dp[i][j] = max(include, exclude);
//         }
//     }
//     return dp[n-1][W];

// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
    
// 	int ans = solve(weight, value, n , maxWeight);
    
//     return ans;
// }

// // space optimised using only one vector

// #include <bits/stdc++.h> 
// int solve(vector<int> &weight, vector<int> &value, int n, int W){
//     // step 1
//     vector<int> curr(W+1, 0);
//     //base case
//     for(int w = weight[0]; w<=W;w++){
//         if(weight[0]<= W){
//             curr[w]= value[0];
//         }else{
//             curr[w]= 0;
//         }
//     }
//     // remaining cases
//     for(int i=1;i<n;i++){
//         for(int j = W;j>=0;j--){    //right to left
            
//             int include = 0;
//             if(weight[i]<= j){
//                 include = value[i] + curr[j-weight[i]];
//             }
//             int exclude = 0 + curr[j];

//             curr[j] = max(include, exclude);
//         }
//     }
//     return curr[W];

// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
    
// 	int ans = solve(weight, value, n , maxWeight);
    
//     return ans;
// }