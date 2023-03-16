// https://practice.geeksforgeeks.org/problems/construct-tree-1/1

// class Solution{
//     public:
//     void createMapping(int in[],map<int,int> &node_index, int n){
        
//         for(int i =0;i<n;i++){           element to index mapping to find position of element in inord array in O(1)time
            
//             node_index[in[i]]= i;
//         }
//     }
    
//     Node* solve(int in[],int pre[],int &preIndex,int startIndex,int endIndex, map<int,int> &node_index,int n){
        
//         if(preIndex>=n || startIndex>endIndex){
//             return NULL;
//         }
        
//         int element = pre[preIndex++];
//         Node * node = new Node(element);
        
//         int position = node_index[element];
        
//         node->left = solve(in,pre,preIndex,startIndex,position-1,node_index,n);
//         node->right = solve(in,pre,preIndex,position+1,endIndex,node_index,n);
        
//         return node;
        
//     }
    
//     Node* buildTree(int in[],int pre[], int n)
//     {
//        int preIndex= 0;
       
//        map <int,int> node_index;
       
//        createMapping(in, node_index, n);
       
//        Node* ans =solve(in, pre, preIndex, 0, n-1, node_index, n);
       
//        return ans;
       
//     }
// };