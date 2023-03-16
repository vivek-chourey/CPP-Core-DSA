// https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1

// Node* solve(Node *root, int &k, int node){
    
//     if(root==NULL){
//         return NULL;
//     }
    
//     if(root->data==node){
//         return root;
//     }
    
//     Node* leftPart =  solve(root->left, k, node);
//     Node* rightPart =  solve(root->right, k, node);
    
//     if(leftPart!=NULL && rightPart==NULL){
        
//         k--;
//         if(k==0){
//             k= INT_MAX;  //ans lock so that it wont come near 0 when returning multiple times, k will never become 0 again hence answer will remain same while returning(decrementing k) multiple times
//             return root;
//         }
        
//         return leftPart;
//     }
//     if(leftPart==NULL && rightPart!=NULL){
        
//         k--;
//         if(k==0){
//             k= INT_MAX;
//             return root;
//         }
        
//         return rightPart;
//     }
//     return NULL;
// }

// int kthAncestor(Node *root, int k, int node)
// {
//     Node* ans =  solve(root, k, node);
//     if(ans==NULL || ans->data==node) //if ans is node itself then also return -1
//         return -1;
//     else 
//         return ans->data;
// }