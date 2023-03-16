// #include <iostream>
// #include <vector>
// using namespace std;
// void bubbleSort(vector<int>& arr, int n)
// {   
//     // Write your code here.
//     for(int i=1;i<n;i++){//round loop

//         bool didSwap = false;

//         for(int j=0;j<n-i;j++){//pair loop for a round

//             if(arr[j]>arr[j+1]){

//                 swap(arr[j],arr[j+1]);
//                 didSwap = true;
//             }
//         }
//         if(didSwap = false){
//             break;//optimization, if did swap remains false for any round i.e already sorted so break
//         }
//     }
// }

// int main() {
//     // Write C++ code here
//     vector <int> arr1 = {8,56,78,3,34,9,20};
//    int n = 7;
//    bubbleSort( arr1, n);
//    for(auto elem:arr1){
//     cout <<elem<<" ";
//    }
    
//     return 0;
// }