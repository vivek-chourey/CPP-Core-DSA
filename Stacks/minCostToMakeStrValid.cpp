// https://www.codingninjas.com/codestudio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0

// #include <bits/stdc++.h> 
// int findMinimumCost(string str) {
  
//     if(str.length()%2 == 1){
//         return -1;
//     }
    
//     stack<int> st;
    
//     for(int i=0;i<str.length();i++){
//         char c = str[i];
//         if(c=='{'){
//             st.push(c);
//         }
//         else{
//             if(!st.empty() && st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 st.push(c);
//             }
//         }
//     }
//     int a=0;
//     int b=0;
//     while(!st.empty()){
//         char top = st.top();
//         st.pop();
//         if(top=='{'){
//             a++;
//         }
//         else{
//             b++;
//         }
//     }
//     return (a+1)/2 + (b+1)/2;
    
    
// }