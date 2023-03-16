// https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/1

// class Solution {
// public:
//     vector<int> inOrder(Node* root)
//     {
//         Node* current = root;
//         vector<int> ans;
        
//         if(current==NULL){
//             return ans;
//         }
        
//         while(current!= NULL){
        
        
//             if(current->left==NULL){
//                 ans.push_back(current->data);
//                 current = current->right;
//             }
            
//             else{
                
//                 Node* predc = current->left;
                
//                 while(predc->right!=NULL && predc->right!=current){
                    
//                     predc = predc->right;
//                 }
                
//                 if(predc->right==NULL){
                    
//                     predc->right=current;
//                     current = current->left;
//                 }
                
//                 else{
//                     predc->right = NULL;
//                     ans.push_back(current->data);
//                     current= current->right;
//                 }
//             }
//         }
//         return ans;
//     }    
// };