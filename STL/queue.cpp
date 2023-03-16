// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue <string> q;
    
    q.push("cat");
    q.push("ball");
    q.push("apple");

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    
    
}