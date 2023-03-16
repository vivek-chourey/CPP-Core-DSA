// https://practice.geeksforgeeks.org/problems/burning-tree/1

// class Solution {
//   public:
//     Node* createMap(Node* root, map<Node*,Node*> &node_parent, int target){
//         Node* res= NULL;
        
//         queue<Node*> q;
//         q.push(root);
        
//         node_parent[root]= NULL;
        
//         while(!q.empty()){
           
                
//                 Node* front = q.front();
//                 q.pop();
                
//                 if(front->data==target){
//                     res = front;
//                 }
                
//                 if(front->left){
//                     node_parent[front->left]= front;
//                     q.push(front->left);
//                 }
                
//                 if(front->right){
//                     node_parent[front->right]= front;
//                     q.push(front->right);
//                 }
              
//         }
//         return res;
        
//     }
//     int burnTree( map <Node*,Node*> node_parent, Node* targetNode ){
        
//         map<Node*, bool> visited;
         
//          int sec;
//         queue<Node*> q;
//         q.push(targetNode);
        
//         visited[targetNode]=true;
        
//          while(!q.empty()){
//             int size = q.size();
//              bool flag = false; 
            
//             for(int i= 0; i<size; i++){
                
//                 Node* front = q.front();
//                 q.pop();
                
//                 if(front->left && !visited[front->left]){
//                     flag = true;
//                     visited[front->left]= true;
//                     q.push(front->left);
//                 }
                
//                 if(front->right && !visited[front->right]){
//                     flag = true;
//                     visited[front->right]= true;
//                     q.push(front->right);
//                 }
                
//                 if(node_parent[front] && !visited[node_parent[front]]){
//                     flag = true;
//                     visited[node_parent[front]]= true;
//                     q.push(node_parent[front]);
//                 }
                
//             }
                
//                 if(flag){
//                     sec++;
//                 }
//         }
        
        
//           return sec;
        
//     }
    
//     int minTime(Node* root, int target) 
//     {
//         map<Node*,Node*> node_parent;
        
//         Node* targetNode = createMap(root, node_parent, target);
        
//         int ans = burnTree( node_parent, targetNode);
//         return ans;
//     }
// };