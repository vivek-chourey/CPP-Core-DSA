// https://www.codingninjas.com/codestudio/problems/nth-fibonacci-number_74156?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

//using recursion + memoization (top down)    O(n)   O(n)

// #include<bits/stdc++.h>
// using namespace std;
// int fibonacci(int n, vector<int> &dp){
//     if(n<=1){
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
    
//     dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
//     return dp[n];
// }
// int main()
// {
//     int n;
//     cin>>n;
    
//     vector<int> dp(n+1, -1);
    
//     cout<<fibonacci(n, dp)<<endl;
    
//     return 0;
// }


//using tabulation (bottom up)  O(n)   O(n)

// #include<bits/stdc++.h>
// using namespace std;
// int fibonacci(int n){
//     vector<int> dp(n+1,-1);
//     dp[0] =0;
//     dp[1] =1;
    
//     for(int i=2;i<=n;i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return dp[n];
// }
// int main()
// {
//     int n;
//     cin>>n;
    
//     cout<<fibonacci(n)<<endl;
    
//     return 0;
// }

//best solution space optimised (using only variables) O(n)   O(1)


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
    // if(n==0){
    //     return prev2;
    // }

//     int prev1= 1;
//     int prev2= 0;

//     for(int i=2;i<=n;i++){
//         int curr = prev1 + prev2;
//         prev2= prev1;
//         prev1= curr;
//     }
    
    
//     cout<<prev1<<endl;
    
//     return 0;
// }