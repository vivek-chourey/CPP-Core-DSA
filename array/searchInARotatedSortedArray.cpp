// for execution link- https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2



// int BinSearch(vector<int>& arr,int start,int end,int key){

//     int s=start,e=end;
//      int mid = s + (e-s)/2; // we dont use (s+e)/2 directly as in case of large int ex 2^31 + 2^31 will excede int limit.
//     while (s<=e){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if (arr[mid]<key){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return -1;
// }
// int pivot(vector<int>& arr,int n){
//     int s=0,e=n-1;
//     int mid= s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//        mid= s + (e-s)/2; 
//     }
//     return s;
// }

// int findPosition(vector<int>& arr, int n, int k)
// {    
//     int pivotIndex = pivot(arr,n);
//     if(k >= arr[pivotIndex] && k <= arr[n-1]){
//         return BinSearch(arr,pivotIndex,n-1,k);
//     }
//     else{
//         return BinSearch(arr,0,pivotIndex-1,k);
//     }
// }






//another sol

// #include<bits/stdc++.h>

// using namespace std;

// int search(vector < int > & nums, int target) {
//   int low = 0, high = nums.size() - 1; //<---step 1

//   while (low <= high) { //<--- step 2
//     int mid = (low + high) >> 1; //<----step 3
//     if (nums[mid] == target)
//       return mid; // <---step 4

//     if (nums[low] <= nums[mid]) { //<---step 5
//       if (nums[low] <= target && nums[mid] >= target)
//         high = mid - 1; //<---step 6 
//       else
//         low = mid + 1; //<---step 7
//     } else { //<---step 7
//       if (nums[mid] <= target && target <= nums[high])
//         low = mid + 1;
//       else
//         high = mid - 1;
//     }
//   }
//   return -1; //<---step 8
// }

// int main() {
//   vector<int> nums = {4,5,6,7,0,1,2,3};
//   int target = 3;
//   cout << "The index in which the target is present is " << search(nums, target);

//   return 0;
// }