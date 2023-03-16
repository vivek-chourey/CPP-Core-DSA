// https://www.codingninjas.com/codestudio/problems/ninja-and-the-fence_3210208?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// // rec + memoization On On

// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int add(int a, int b){
//     return (a%MOD + b%MOD)%MOD;
// }
// int mul(int a, int b){
//     return (a%MOD * 1LL * b%MOD)%MOD;
// }
// int solve(int n, int k, vector<int> &dp){
    
//     if(n == 1){
//         return k;
//     }
//     if(n==2){
//         return (k+ k*(k-1));
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
    
//     dp[n] = add(mul(solve(n-2, k, dp) , (k-1)) , mul(solve(n-1, k, dp) , (k-1)));
//     return dp[n];
// }

// int numberOfWays(int n, int k) {
//     vector<int> dp(n+1, -1);
//     int ans = solve(n, k, dp);
//     return ans;
// }

// // tabulation On On

// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int add(int a, int b){
//     return (a%MOD + b%MOD)%MOD;
// }
// int mul(int a, int b){
//     return (a%MOD * 1LL * b%MOD)%MOD;
// }
// int solve(int n, int k){
    
//     vector<int> dp(n+1, INT_MAX);
//     dp[1]= k;
//     dp[2]= (k+ k*(k-1));
    
//     for(int i = 3; i<=n; i++){
        
//         dp[i] = add(mul(dp[i-2] , (k-1)) , mul(dp[i-1] , (k-1)));
//     }
    
//     return dp[n];
// }

// int numberOfWays(int n, int k) {
   
//     int ans = solve(n, k);
//     return ans;
// }

// // space opti(only vars) On O1

// int numberOfWays(int n, int k) {
   
//     int prev2 = k;
//     int prev1 = (k+ k*(k-1));
    
//     for(int i = 3; i<=n; i++){
        
//         int curr = add(mul(prev2 , (k-1)) , mul(prev1 , (k-1)));
//         prev2 = prev1;
//         prev1 = curr;
//     }
    
//     return prev1;
// }