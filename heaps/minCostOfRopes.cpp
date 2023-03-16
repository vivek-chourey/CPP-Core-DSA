// // https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;


// // } Driver Code Ends
// class Solution
// {
//     public:
//     //Function to return the minimum cost of connecting the ropes.
//     long long minCost(vector<long long> &arr, long long n) {
        
//         priority_queue<long long, vector<long long>, greater<long long>> q;
        
//         for(auto i : arr){
//             q.push(i);
//         }
//         long long sum =0;
        
//         while(q.size() > 1){
            
//            long long min1 = q.top();
//             q.pop();
            
//            long long min2 = q.top();
//             q.pop();
            
//            long long ans = min1 + min2;
            
//             sum+=ans;
            
//             q.push(ans);
            
//         }
//         return sum;
//     }    
// };


// //{ Driver Code Starts.

// int main() {
//     long long t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         long long i;
//         vector<long long> a(n);

//         for (i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         Solution ob;
//         cout << ob.minCost(a, n) << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends

