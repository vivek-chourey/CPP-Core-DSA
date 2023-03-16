// https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

// #include <bits/stdc++.h> 

// void solve(stack<int>& s, int x){
    
//     if(s.empty()){
//         s.push(x);
//         return;
//     }
//     int temp = s.top();
//     s.pop();
    
//     solve(s, x);
    
//     s.push(temp);
// }
// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
    
//     solve(myStack, x);
//     return myStack;
// }