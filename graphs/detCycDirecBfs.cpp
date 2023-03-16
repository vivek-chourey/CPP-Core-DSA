// https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// this is based on the logic that, when finding topological sort of directed acyclic graph using kahn's algo, we get valid topo sort only when the graph is acyclic, if cycle is present it will give invalid topo sort.

//  #include <bits/stdc++.h>
// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//    unordered_map <int, list<int>> adj;     //adjacency list
//     for(int i= 0;i<edges.size();i++){
        
//         int u = edges[i].first -1;
//         int v = edges[i].second -1;
        
//         adj[u].push_back(v);
        
//     }
//     vector <int> inDegree(n);           //indegree vector
//     for(auto i:adj){
//         for(auto j: i.second){
//             inDegree[j]++;
//         }
//     }
//     queue<int> q;                   
//                                     //if indegree is 0 push in queue
//     for(int i=0;i<n;i++){
//         if(inDegree[i]==0){
//             q.push(i);
//         }
//     }
//     int cnt =0;
//     while(!q.empty()){              //push back in ans the front element and decrement neighbours indegree
//         int front = q.front();
//         q.pop();
        
//         cnt++;
//         for(auto neighbour: adj[front]){
//             inDegree[neighbour]--;
//             if(inDegree[neighbour]==0){
//                 q.push(neighbour);
//             }
//         }
//     }
   
//     if(cnt==n){              //valid topo sort
//         return false;
        
//     }
//     return true;                //invalid topo sort cycle detected
// }