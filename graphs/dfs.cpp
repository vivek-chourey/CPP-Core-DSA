// https://www.codingninjas.com/codestudio/problems/dfs-traversal_630462?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// void dfs(unordered_map <int , set<int>> &adjList, vector <int> &component, unordered_map <int , bool> &visited, int node){
//     component.push_back(node);
//     visited[node] = true;
    
//     for(auto i: adjList[node]){
//         if(!visited[i]){
//             dfs(adjList, component, visited, i);
//         }
//     }
// }
// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//    unordered_map <int , set<int>> adjList;
    
//    for(int i=0;i<edges.size();i++){
//         int u = edges[i][0];
//         int v = edges[i][1];
        
//         adjList[u].insert(v);
//         adjList[v].insert(u);
//     }
    
//     vector <vector<int>> ans;
//     unordered_map <int , bool> visited;
    
    
//     for(int i=0;i<V;i++){
//         if(!visited[i]){
//             vector <int> component;
//             dfs(adjList, component, visited, i);
//             ans.push_back(component);
//         }
//     }
//     return ans;
// }