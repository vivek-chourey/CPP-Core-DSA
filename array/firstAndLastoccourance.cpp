//code will run on code studio link= https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2





// int firstoc(vector<int>& arr,int n, int k){
//     int s=0,e=n-1;
//     int mid = s +(e-s)/2;
//     int ans=-1;
    
//     while (s<=e){
//         if(arr[mid]==k){
//             ans = mid;
//             e= mid-1; // go to left to check first occurrance if any
//         }
//         else if(arr[mid]<k){
//             s= mid+1;
//         }
//         else{
//             e= mid-1;
//         }
//         mid = s +(e-s)/2;
//     }
//     return ans;
// }

// int lastoc(vector<int>& arr,int n, int k){
//     int s=0,e=n-1;
//     int mid = s +(e-s)/2;
//     int ans=-1;
    
//     while (s<=e){
//         if(arr[mid]==k){
//             ans = mid;
//             s= mid+1;// go to right to check last occurrance if any
//         }
//         else if(arr[mid]<k){
//             s= mid+1;
//         }
//         else{
//             e= mid-1;
//         }
//         mid = s +(e-s)/2;
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
    
//     pair<int, int> anspair;
//     anspair.first = firstoc(arr,n,k);
//     anspair.second = lastoc(arr,n,k);
//     return anspair;
//     // we can also find total number of occurrance by (lastocc - firstocc +1)
// }