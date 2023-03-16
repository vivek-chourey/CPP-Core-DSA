//also called deck or double ended queue

// #include <bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;

int main(){
    
    deque <int> d;

    d.push_back(7);
    d.push_front(3);
    d.push_front(1);
    d.push_back(2);

    for(auto i:d){
        cout<< i<<" "; 
    }cout<<endl;

    d.pop_back();
    d.pop_front();

    cout<< d.size()<<endl;

    
    cout<<d.at(1)<<"\n";
    cout<<d.empty()<<"\n";
    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";

    d.erase(d.begin(),d.begin()+1);  //takes start index and end index
    
    for(auto i:d){
        cout<< i<<" "; 
    }



    
}