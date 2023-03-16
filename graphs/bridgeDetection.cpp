// https://www.codingninjas.com/codestudio/problems/bridges-in-graph_893026?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

        //O(v+e)        o(n) 

// #include<unordered_map>
// #include<list>

// void dfs(int node, int &timer, vector<int> &disco, vector<int> &low, int &parent, vector<vector<int>> &result, unordered_map <int, list<int>> &adj, vector<bool> &visited){
    
//     visited[node] = true;
//     disco[node] = low[node] = timer++;
    
//    for(auto nbr: adj[node]){
//        if(nbr==parent){
//            continue;
//        }
//        if(!visited[nbr]){
//            dfs(nbr, timer, disco, low, node, result, adj, visited);
//            low[node] = min(low[node], low[nbr]); 
           
//            //check if edge is bridge
//            if(low[nbr]>disco[node]){
//                vector<int> ans;
//                ans.push_back(nbr);
//                ans.push_back(node);
//                result.push_back(ans);
               
//            }
//        }
//        else{  //back edge
//            low[node] = min(low[node], disco[nbr]);
//        }
//    }
// }
// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    
//     unordered_map <int, list<int>> adj;
//     for(int i=0; i<e;i++){
        
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adj[u].push_back(v);
//         adj[v].push_back(u);
        
//     }
//     int timer =0;
//     vector<int> disco(v, -1);
//     vector<int> low(v, -1);
//     int parent =-1;
//     vector<bool> visited(v+1, false);
//     vector<vector<int>> result;
    
//     for(int i=0;i<v;i++){
//         if(!visited[i]){
//             dfs(i, timer, disco, low, parent, result, adj, visited);
//         }
//     }
    
//     return result;

// }