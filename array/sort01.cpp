#include <iostream>
using namespace std;

void printarray(int arr[],int n){
    for (int i =0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n";
}

void sort01(int arr[],int n){

    int i=0,j=n-1;

    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
    }
    cout <<"done"<<endl;
     printarray(arr,8);
}

int main()
{

    int arr[8] ={0,0,1,0,0,0,0,1};
    printarray(arr,8);
    sort01(arr,8);
    

}