// https://www.codingninjas.com/codestudio/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include <bits/stdc++.h> 
// void makeAdjL(unordered_map <int , set<int>> &adjList, vector<pair<int, int>> edges){
//     for(int i=0;i<edges.size();i++){
//         int u = edges[i].first;
//         int v = edges[i].second;
        
//         adjList[u].insert(v);
//         adjList[v].insert(u);
//     }
// }
// void bfs(unordered_map <int , set<int>> adjList, vector<int> &ans, unordered_map <int , bool> &visited, int node){
    
//     queue<int> q;
//     q.push(node);
//     visited[node] = 1;
    
//     while(!q.empty()){
        
//         int front = q.front();
//         q.pop();
        
//         ans.push_back(front);
        
//         for(auto i: adjList[front]){
//             if(!visited[i]){
//                 q.push(i);
//                 visited[i] = 1;
//             }
//         }
//     }
    
// }

// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     unordered_map <int , set<int>> adjList;
//     unordered_map <int , bool> visited;
//     vector <int> ans;
    
//     makeAdjL(adjList, edges);
    
//     for(int i=0;i<vertex;i++){
//         if(!visited[i]){
//             bfs(adjList, ans, visited, i);
//         }
//     }
//     return ans;
// }