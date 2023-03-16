// https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=0

// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     stack <int> st;
    
//     for(int i=0;i<s.length();i++){
        
//         char ch = s[i];
//         if(ch=='(' || ch=='+' || ch=='-' || ch=='/' || ch=='*'){
            
//             st.push(ch);
//         }
//         else{
            
//             if(ch==')'){
//                 bool redun = true;
//                 while(st.top()!='('){
//                     char top= st.top();
//                     if(top=='+' || top=='-' || top=='/' || top=='*'){
//                         redun = false;
//                         st.pop();
//                     }
                    
                    
//                 }
//                 if(redun==true){
//                     return true;
//                 }
//                 st.pop();
//             }
//         }
//     }
//     return false;
// }
