


//rec+memoi

// int solve(int n, vector<int> days, vector<int> cost, int ind, vector<int>& dp){
    
//     if(ind>=n){
//         return 0;
//     }
//     if(dp[ind]!=-1){
//         return dp[ind];
//     }
//     int i;
//     int opt1 = cost[0] + solve(n, days, cost, ind+1,dp);     // 1day
    
//     for(i=ind;i<n && days[i]<days[ind]+7;i++);        
//      int opt2 = cost[1] + solve(n, days, cost, i,dp);        //7 day
    
//     for(i=ind;i<n && days[i]<days[ind]+30;i++);
//      int opt3 = cost[2] + solve(n, days, cost, i,dp);        //30 day
    
//     dp[ind] = min(opt1,min(opt2,opt3));
    
//     return dp[ind];
// }
// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//    vector<int> dp(n+1, -1);
//    return solve(n,days,cost,0, dp);
// }

//tabul


// int solve(int n, vector<int> days, vector<int> cost){
    
//     vector<int> dp(n+1, INT_MAX);
    
//     dp[n]= 0;
    
//    for(int k=n-1; k>=0;k--){
       
//     int i;
//     int opt1 = cost[0] + dp[k+1];  // 1day
    
//     for(i=k;i<n && days[i]<days[k]+7;i++);        
//      int opt2 = cost[1] + dp[i];        //7 day
    
//     for(i=k;i<n && days[i]<days[k]+30;i++);
//      int opt3 = cost[2] + dp[i];        //30 day
    
//     dp[k] = min(opt1,min(opt2,opt3));
       
//    }
    
//     return dp[0];
// }
// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//    return solve(n,days,cost);
// }
