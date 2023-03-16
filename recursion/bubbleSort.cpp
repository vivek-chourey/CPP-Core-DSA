#include <iostream>
using namespace std;
void bubble_sort(int *arr,int n){
    if(n==0||n==1)return;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){        //bring the largest element to the last 
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);

}
int main()
{
    int n=6;
    int a[]={3,7,2,9,5,1};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    bubble_sort(a, n);

    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}