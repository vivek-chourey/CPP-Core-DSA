//stl list is doubly linked list

// #include <bits/stdc++.h>
#include <iostream>
#include <list>
using namespace std;

int main(){
    

    list <int> l;

    l.push_back(6);
    l.push_back(7);
    l.push_front(3);


    
    for(auto elem:l){// this will also work
        cout<<elem<<" ";
    }cout<<endl;

    l.erase(l.begin());

    for(auto elem:l){// this will also work
        cout<<elem<<" ";
    }cout<<endl;
    
    
    cout<<l.empty()<<"\n";
    cout<<l.front()<<"\n";
    cout<<l.back()<<"\n";
    
}