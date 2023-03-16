// https://www.codingninjas.com/codestudio/problems/bellmon-ford_2041977?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// //O(n*m)

// #include <bits/stdc++.h> 

// int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
//     vector<int> dist(n+1, 1e9);
//     dist[src] =0;
//     //run n-1 times for each edge
//     for(int i=1;i<n; i++){
        
//         for(int j=0;j<m;j++){
//             int u = edges[j][0];
//             int v = edges[j][1];
//             int w = edges[j][2];
        
//             if(dist[u]!=1e9 && dist[u] + w < dist[v]){
//                 dist[v] =  dist[u] + w;       
//             }
//         }
//     }
    
//     //check for -ve weight cycle by watching if dist values change on one more iteration
    
//     int flag=0;
//     for(int j=0;j<m;j++){
//             int u = edges[j][0];
//             int v = edges[j][1];
//             int w = edges[j][2];
        
//             if(dist[u]!=1e9 && dist[u] + w < dist[v]){
//                 flag++;       
//             }
//      }
//     //answer
//     if(flag==0){
//         return dist[dest];
//     }
//     return -1;
// }