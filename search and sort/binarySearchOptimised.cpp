// #include <iostream>
// using namespace std;

// int BinSearch(int arr[],int n,int key){

//     int s=0,e=n-1;
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

// int main()
// {

//     int arr [6]={3,6,9,24,56,78};
//     int ans = BinSearch(arr,6,78);
//     cout<< ans<<"\n";

//     return 0;

// }