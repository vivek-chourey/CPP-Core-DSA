// https://leetcode.com/problems/rotate-array/



// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
        
//         for(int i=0;i<nums.size();i++){

//             temp[(i+k) % nums.size()]=nums[i];  
            
//              // (i+k) % nums.size()  or (i+k) % n  gives rotated index for example i = 4 ,k is given 3 and size of array n =5 so k+i =7 but 7 is out of bound so % n will give us the rotated index i.e 7%5=2 so that particular element will be stored at index 2 of temp cyclically.
//         }
//         nums=temp;
//     }
// };