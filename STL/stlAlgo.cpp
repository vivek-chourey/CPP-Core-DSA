// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector <int> v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<binary_search(v.begin(),v.end(),5)<<endl;

    cout<< lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<< upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    // max(a,b)
    
    //min(a,b)

    //swap(a,b)

    // string s ="abcd"
    //reverse(s.begin(),s.end())   it will reverse string

    rotate(v.begin(),v.begin()+2,v.end());// 6 7 1 3

    // rotate(v.begin(),v.begin()+1,v.end());  // 3 6 7 1

    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());  //based on introsort made up of quick sort, heap sort, insertion sort

    for(auto i:v){
        cout<<i<<" ";
    }



    
}