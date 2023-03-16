// https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

// int createMapping(int in[],map<int,int> &node_index, int n){
        
//         for(int i =0;i<n;i++){
            
//             node_index[in[i]]= i;
//         }
//     }
    
//     Node* solve(int in[],int post[],int &postIndex,int startIndex,int endIndex, map<int,int> &node_index,int n){
        
//         if(postIndex<0 || startIndex>endIndex){
//             return NULL;
//         }
        
//         int element = post[postIndex--];
//         Node * node = new Node(element);
        
//         int position = node_index[element];
        
//         node->right = solve(in,post,postIndex,position+1,endIndex,node_index,n); //right call first
//         node->left = solve(in,post,postIndex,startIndex,position-1,node_index,n);
        
//         return node;
        
//     }
    
// Node *buildTree(int in[], int post[], int n) {
    
//         int postIndex= n-1;
       
//         map <int,int> node_index;
       
//         createMapping(in, node_index, n);
       
//         Node* ans =solve(in, post, postIndex, 0, n-1, node_index, n);
       
//         return ans;
// }
