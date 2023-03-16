// https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include<unordered_map>
// #include<queue>
// #include<set>

// bool dfsCycDet(int node, int parent, unordered_map <int ,bool> &visited, unordered_map <int, set<int>> &adj){
    
//     visited[node] = 1;
    
//         for(auto neighbour: adj[node]){
//             if(!visited[neighbour]){
//                 bool ans = dfsCycDet(neighbour, node, visited, adj);
//                 if(ans){
//                     return true;
//                 }
//             }else if(neighbour!=parent){
//                return true;
//             }
//        }
  
//     return false;
    
// }
// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     unordered_map <int, set<int>> adj;
//     for(int i= 0;i<m;i++){
        
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adj[u].insert(v);
//         adj[v].insert(u);
//     }
    
    
//     unordered_map <int ,bool> visited;
//     for(int i=1;i<=n;i++){
//         if(!visited[i]){
//             bool ans = dfsCycDet(i,-1, visited, adj);
//             if(ans==1){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
