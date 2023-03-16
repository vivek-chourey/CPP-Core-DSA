// #include <bits/stdc++.h>
#include <iostream>
#include <array>
using namespace std;

int main(){
    int basicArr[5]={5,7,4,9,3};

    array <int,5> stlArr ={5,7,4,9,3};
    int size = stlArr.size();

    for(int i=0;i<size;i++){
        cout<<stlArr[i]<<" ";
    }
    cout<<"\n";
    // for(auto elem:stlArr){// this will also work
    //     cout<<elem<<" ";
    // }
    
    cout<<stlArr.at(2)<<"\n";
    cout<<stlArr.empty()<<"\n";
    cout<<stlArr.front()<<"\n";
    cout<<stlArr.back()<<"\n";
    
}