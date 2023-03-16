// https://www.codingninjas.com/codestudio/problems/count-derangements_873861?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// //rec + memoization On

// #include <bits/stdc++.h>
// #define MOD 1000000007
// long long int solve(int n, vector<long long int> &dp){
    
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
    
//     dp[n] = ((n-1) * ( (solve(n-1, dp)) +  (solve(n-2, dp))))%MOD;
    
//     return dp[n];
// }

// long long int countDerangements(int n) {
//     vector<long long int> dp(n+1, -1);
//     long long int ans = solve(n, dp);
//     return ans;
// }

// //tabulation    On On

// #include <bits/stdc++.h>
// #define MOD 1000000007
// long long int solve(int n){
    
//     vector<long long int> dp(n+1, INT_MIN);
    
//     dp[1]=0;
//     dp[2]=1;
    
//     for(int i=3;i<=n;i++){
//         dp[i] = ((i-1) * ( (dp[i-1]) +  (dp[i-2])))%MOD;
//     }
//     return dp[n];
// }

// long long int countDerangements(int n) {
    
//     long long int ans = solve(n);
//     return ans;
// }


// // space optimized(using only variables) On O1


// #include <bits/stdc++.h>
// #define MOD 1000000007
// long long int solve(int n){
    
    
//     long long int prev2 = 0;
//     long long int prev1 = 1;
    
//     for(int i=3;i<=n;i++){
//         long long int curr = ((i-1) * ( prev1 +  prev2))%MOD;
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1;
// }

// long long int countDerangements(int n) {
    
//     long long int ans = solve(n);
//     return ans;
// }