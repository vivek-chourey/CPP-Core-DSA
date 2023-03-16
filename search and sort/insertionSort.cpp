// #include <iostream>
// #include <vector>
// using namespace std;
// void insertionSort(int n, vector<int> &arr){
    
//     for(int i=1;i<n;i++){//loop for rounds

//         int key=arr[i]; //storing key beforehand as it is going to be overwritten while shifting process

//         int j=i-1; //initializing j to iterate elements to the left of key 
        
//         while(j>=0 && arr[j]>key){ //shifting elements to right side by one spot if these conditions are true

//             arr[j+1] = arr[j];
//             j--; // moving to the left
//         }
//         arr[j+1]= key;//placing the key element at correct spot, here we use j+1 as in previous line(inside while) j was decremented
//     }
// }

// int main() {
//     // Write C++ code here
//     vector <int> arr1 = {8,56,78,3,34,9,20};
//    int n = 7;
//    insertionSort( n,arr1);
//    for(auto elem:arr1){
//     cout <<elem<<" ";
//    }
    
//     return 0;
// }