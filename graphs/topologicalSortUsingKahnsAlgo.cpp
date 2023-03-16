// https://www.codingninjas.com/codestudio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

       // O n+e           O n+e

// #include <bits/stdc++.h> 
 
// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
//     unordered_map <int, list<int>> adj;     //adjacency list
//     for(int i= 0;i<e;i++){
        
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adj[u].push_back(v);
        
//     }
//     vector <int> inDegree(v);           //indegree vector
//     for(auto i:adj){
//         for(auto j: i.second){
//             inDegree[j]++;
//         }
//     }
//     queue<int> q;                   
//                                     //if indegree is 0 push in queue
//     for(int i=0;i<v;i++){
//         if(inDegree[i]==0){
//             q.push(i);
//         }
//     }
//     vector <int> ans;
//     while(!q.empty()){              //push back in ans the front element and decrement neighbours indegree
//         int front = q.front();
//         q.pop();
        
//         ans.push_back(front);
//         for(auto neighbour: adj[front]){
//             inDegree[neighbour]--;
//             if(inDegree[neighbour]==0){
//                 q.push(neighbour);
//             }
//         }
//     }
   
//     return ans;
// }