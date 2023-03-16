#include <iostream>
using namespace std;
int partition(int *arr,int s,int e){        //returns a partition index by placing pivot element(here first element of array) at its right place such that, all elements to left of pivot are less than pivot and those to the right are greater.
    int pivot = arr[s];         //consider first element as pivot element
    int minCount=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            minCount++;
        }
    }
    int partitionInd= s+ minCount;         //finding partition index

    swap(arr[s],arr[partitionInd]);         //placing pivot element at correct position
    
    int j=s;
    int k=e;

    while(j<partitionInd && k>partitionInd){            //for making all left element less than pivot and right ones greater than pivot.
        
        while(arr[j]<pivot){
            j++;
        }
        while(arr[k]>pivot){
            k--;
        }
        if(j<partitionInd && k>partitionInd){
            swap(arr[j++],arr[k--]);
        }

    }
    return partitionInd;
    
}

void quick_sort(int *arr,int s,int e){
    if(s>=e)return;

    int p= partition(arr,s,e);        //call partition fn to get partition index

    quick_sort(arr,s,p-1);      //quick sort recursive call for left side

    quick_sort(arr,p+1,e);      //quick sort recursive call for right side

}
int main()
{
    int n=6;
    int a[]={3,7,2,9,5,1};
    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    quick_sort(a,0,5);

    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}