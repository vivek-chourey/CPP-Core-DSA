#include <iostream>
#include <vector>
using namespace std;
int sumArr(int* arr, int n)
{   
    if(n==0)return 0;
    else{
        return arr[0]+ sumArr( arr+1, n-1);
    }
}

int main() {
    // Write C++ code here
   int arr1[] = {8};
   int n = 1;
   cout<<sumArr( arr1, n);
   
    
    return 0;
}