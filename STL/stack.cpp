// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack <string> s;
    
    s.push("cat");
    s.push("ball");
    s.push("apple");

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<"\n";
    
    
}