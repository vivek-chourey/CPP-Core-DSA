// #include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main(){

    map <int,string> m;
    
    m[1]="vivek";
    m[12]="kumar";
    m[2]="bumrah";

    m.insert({5,"hellboi"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;//prints the keys in sorted order (not in unordered map)
    }
    cout <<m.count(12)<<endl;
    cout <<m.count(13)<<endl;

    m.erase(12);

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;//prints the keys in sorted order (not in unordered map)
    }

    // find will work similar to set here

    //in map tc is Olog(n)
    
}