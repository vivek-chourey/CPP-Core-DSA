// https://www.codingninjas.com/codestudio/problems/shortest-path-in-an-unweighted-graph_981297?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

//  #include <bits/stdc++.h> 
// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
// 	unordered_map<int ,list<int>> adjList;
// 	for(int i=0;i<m;i++){
//         int u = edges[i].first;
//         int v = edges[i].second;
        
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
//     unordered_map<int ,bool> visited;
//     unordered_map<int ,int> parent;
    
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;
//     parent[s]= -1;
    
//     while(!q.empty()){
        
//         int front = q.front();
//         q.pop();
        
        
//         for(auto i: adjList[front]){
//             if(!visited[i]){
//                 q.push(i);
//                 visited[i] = 1;
//                 parent[i]= front;
//             }
//         }
//     }
//     vector<int> ans;
//     int curr = t;
//     ans.push_back(curr);
//     while(curr!=s){
//         curr = parent[curr];
//         ans.push_back(curr);
//     }
//     reverse(ans.begin(), ans.end());
    
//     return ans;
// }
