
// #include <iostream>
// #include <vector>
// using namespace std;

// void selectionSort(vector<int>& arr, int n)
// {   
//     // Write your code here.
//     for (int i= 0;i<n-1;i++){
//             int minInd = i;
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]<arr[minInd]){   //fix one element then find smallest elem in remaining array and then swap
//                     minInd = j;
//                 }
//             }
//             swap(arr[i],arr[minInd]);
//         }
// }
// int main()
// {
//    vector <int> arr1 = {8,56,78,3,34,9,20};
//    int n = 7;
//    selectionSort( arr1, n);
   
//     for(auto elem:arr1){
//         cout<<elem<<" ";
//     }

//    return 0;
// }
