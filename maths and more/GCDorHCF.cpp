//https://leetcode.com/problems/find-greatest-common-divisor-of-array/submissions/

// class Solution {
// public:
//     int findGCD(vector<int>& nums) {
//         int max = *max_element(nums.begin(),nums.end());        //formula used to find gcd is gcd(a,b)=gcd(a-b,b) until one element becomes 0;
//         int min = *min_element(nums.begin(),nums.end());
        
//         if(max==0){
//             return min;
//         }
//         if(min==0){
//             return max;
//         }
//         while(max!=min){
//             if(max>min){
//                 max-=min;
//             }
//             else{
//                 min-=max;
//             }
//         }
//         return max;
//     }
// };