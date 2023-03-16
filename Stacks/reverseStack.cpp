// https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1

// void insBottom(stack<int> &s, int x){
//     if(s.empty()){
//         s.push(x);
//         return;
//     }
    
//     int temp = s.top();
//     s.pop();
    
//     insBottom(s, x);
    
//     s.push(temp);
// }
// void reverseStack(stack<int> &stack) {
    
//     if(stack.empty()){
//         return;
//     }
    
//     int top= stack.top();
//     stack.pop();
    
//     reverseStack(stack);
    
//     insBottom(stack, top);
    
// }