// https://leetcode.com/problems/merge-sorted-array/submissions/


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=0,j=0,k=0;
//         vector<int> tempArr(m+n,0);
//         while(i<m && j<n){
//             if(nums1[i]<nums2[j]){
//                 tempArr[k++]=nums1[i++];
                
//             }else{
//                 tempArr[k++]=nums2[j++];
//             }
//         }
//         while(i<m){
//             tempArr[k++]=nums1[i++];
//         }
//         while(j<n){
//             tempArr[k++]=nums2[j++];
//         }
//         nums1=tempArr;
        
//     }
// };