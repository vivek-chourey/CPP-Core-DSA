// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector<int> res;
//         unordered_map<int, int> mp;

//         for(int i=0; i<nums.size();i++){

//             if(mp.find(target - nums[i])==mp.end()){     //if target - nums[i] not found in map add current element in map with its index
//                 mp[nums[i]]= i;
//             }
//             else{                                        //if found simply store index of both and break
//                 res.push_back(i);
//                 res.push_back(mp[target - nums[i]]);
//                 break;
//             }
//         }
//         return res;
//     }
// };