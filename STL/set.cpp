//duplicate entries are treated as single entry,all elements are unique,modification of elements is not possible, elements are returned in sorted order(not in unordered set),set is slower than unordered set.

//it is based on BST

//insert, find, erase, count  t.c O(log(n))
//size, begin, end, empty t.c O(1)

// #include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main(){

    set <int> s;
    
    s.insert(5);  //its t.c is O(log(n))
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(0);
    s.insert(5);
    s.insert(10);

    for(auto i:s){   // 0 1 4 5 10
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    // 1 4 5 10

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    // 1 5 10 

    for(auto i:s){   // 1 5 10
        cout<<i<<" ";
    }cout<<endl;

    cout<<s.count(5)<<endl;  // tells if element is present or not
    set<int>::iterator itr = s.find(5);  //response is reference of the value

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    
}