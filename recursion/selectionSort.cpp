#include <iostream>
using namespace std;
void selection_sort(int *arr,int i,int n){
    if(i==n)return;         //return if i has reached n

    
    int min=i;
    for(int j=i+1;j<n;j++){         //finding min element and swapping with ith(assumed min) element
        if(arr[min]>arr[j]){
            min=j;
        }
    }
    swap(arr[min],arr[i]);
   

    selection_sort(arr,i+1,n);      //passing incremented i

}
int main()
{
    int n=6;
    int a[]={3,7,2,9,5,1};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    selection_sort(a,0, n);

    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}