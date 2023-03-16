// https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1

// #include <bits/stdc++.h> 
// void sortedInsert(stack<int> &s, int x){
    
//     if(s.empty() || s.top() < x){
//         s.push(x);
//         return;
//     }
    
//     int top = s.top();
//     s.pop();
//     sortedInsert(s, x);
    
//     s.push(top);
// }

// void sortStack(stack<int> &stack)
// {
// 	if(stack.empty()){
//         return;
//     }
    
//     int top = stack.top();
//     stack.pop();