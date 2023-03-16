// https://www.codingninjas.com/codestudio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include <bits/stdc++.h> 


// void topo(int node, vector<bool> &visited, stack<int> &s, unordered_map <int, set<int>> &adj){
    
//     visited[node] = 1;
    
//         for(auto neighbour: adj[node]){
//             if(!visited[neighbour]){
//                 topo(neighbour, visited, s, adj);
                
//             }
//        }
  
//     s.push(node);
    
// }
// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
//     unordered_map <int, set<int>> adj;
//     for(int i= 0;i<e;i++){
        
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adj[u].insert(v);
        
//     }
    
//     stack<int> s;
//     vector <bool> visited(v);
//     for(int i=0;i<v;i++){
//         if(!visited[i]){
//            topo(i ,visited, s, adj);
            
//         }
//     }
    
//     vector<int> ans;
//     while(!s.empty()){
//         ans.push_back(s.top());
//         s.pop();
//     }
//     return ans;
// }