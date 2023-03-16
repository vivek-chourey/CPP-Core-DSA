// https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include<unordered_map>
// #include<queue>
// #include<set>

// bool dfsCycDet(int node, unordered_map <int ,bool> &visited, unordered_map <int ,bool> &dfsvisited, unordered_map <int, set<int>> &adj){
    
//     visited[node] = true;
//     dfsvisited[node] = true;            //for noting function call
    
//         for(auto neighbour: adj[node]){
//             if(!visited[neighbour]){
//                 bool ans = dfsCycDet(neighbour, visited, dfsvisited,  adj);
//                 if(ans){
//                     return true;
//                 }
//             }else if(dfsvisited[neighbour]){        //if visited and dfsvisited both true then cycle detected
//                return true;
//             }
//        }
//     dfsvisited[node] = false;           //mark false after retuning
//     return false;
    
// }
// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
//      unordered_map <int, set<int>> adj;
//     for(int i= 0;i<edges.size();i++){
        
//         int u = edges[i].first;
//         int v = edges[i].second;
        
//         adj[u].insert(v);           //directed
        
//     }
    
    
//     unordered_map <int ,bool> visited;
//     unordered_map <int ,bool> dfsvisited;
//     for(int i=1;i<=n;i++){
//         if(!visited[i]){
//             bool ans = dfsCycDet(i, visited, dfsvisited, adj);
//             if(ans){
//                 return true;
//             }
//         }
//     }
//     return false;
// }