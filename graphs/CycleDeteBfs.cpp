// https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include<unordered_map>
// #include<queue>
// #include<set>

// bool bfsCycDet(int node, unordered_map <int ,bool> &visited, unordered_map <int, set<int>> &adj){
//     unordered_map <int,int> parent;
//     parent[node] = -1;
//     visited[node] = 1;
//     queue<int> q;
//     q.push(node);
    
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();
        
//         for(auto neighbour: adj[front]){
//             if(visited[neighbour] == 1 && neighbour!=parent[front]){
//                 return true;
//             }else if(!visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour]= 1;
//                 parent[neighbour]=front;
//             }
//         }
//     }
//     return false;
    
// }
// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     unordered_map <int, set<int>> adj;
//     for(int i= 0;i<m;i++){              //adj list
        
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adj[u].insert(v);
//         adj[v].insert(u);
//     }
    
//     unordered_map <int ,bool> visited;
//     for(int i=0;i<n;i++){               //to handle disconnected components
//         if(!visited[i]){
//             bool ans = bfsCycDet(i, visited, adj);
//             if(ans==1){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
