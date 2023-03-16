// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue <int> maxi; //max heap, first element will always be maximum

    priority_queue<int,vector<int>,greater<int>> mini; //min heap
    
    maxi.push(3);
    maxi.push(2);
    maxi.push(5);
    maxi.push(1);
    
    int n= maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(3);
    mini.push(2);
    mini.push(5);
    mini.push(1);
    
    int m= mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<mini.empty();



    
    
    return 0;
}