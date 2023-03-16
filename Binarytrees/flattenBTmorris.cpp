// https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1

// class Solution
// {
//     public:
//     void flatten(Node *root)
//     {
//         Node* curr = root;
        
//         while(curr!= NULL){
            
//             if(curr->left==NULL){
//                 curr = curr->right;
//             }
            
//             else{
                
//                 Node* predc = curr->left;
                
//                 while(predc->right!=NULL){
//                     predc = predc->right;
//                 }
                
//                 predc->right = curr->right;
//                 curr->right = curr->left;
//                 curr->left = NULL;
                
//             }
//         }
//     }
// };