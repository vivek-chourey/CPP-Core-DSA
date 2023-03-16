// https://www.codingninjas.com/codestudio/problems/dijkstra-s-shortest-path_920469?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// //O(ElogV)            O(E+V)

// #include <bits/stdc++.h> 
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
//     unordered_map <int , list<pair<int,int>>> adj;    //creating adj list
//     for(int i = 0; i<edges; i++){
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2];
    
//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));
//     }
    
//     vector<int> distance(vertices,INT_MAX);  //creation and initialization of distance array with INT_MAX.
//     set<pair<int,int>> s;        //creation of set like (distance,node)
//     distance[source]=0;            //init dist and set with source
//     s.insert(make_pair(0,source));
    
//     while(!s.empty()){
        
//         auto top = *(s.begin());        //fetching top(pair with min dist)element
//         int topDist = top.first;
//         int topNode = top.second;
//         s.erase(top);                //erasing after fetching
        
//         for(auto neighbour : adj[topNode]){ // for the neighbours of topNode
//             if(topDist + neighbour.second < distance[neighbour.first]){  //condition for distance minimization
                
//                auto it = s.find(make_pair(distance[neighbour.first],neighbour.first ));
                
//                 if(it!=s.end()){        //erase old entry of neighbour.first if present
//                     s.erase(it);
//                 }
//                 distance[neighbour.first]=topDist + neighbour.second;  //update with lesser distance
//                 s.insert(make_pair(distance[neighbour.first],neighbour.first)); //insert in set
//             }
//         }
        
//     }
    
//     return distance;
    
// }
