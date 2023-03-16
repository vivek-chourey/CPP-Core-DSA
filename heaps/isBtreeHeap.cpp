// https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1

// class Solution {
//   public:
  
//     int countNodes(struct Node* tree){
        
//         if(tree == NULL){
//             return 0;
//         }
        
//         int ans = 1 + countNodes(tree->left) + countNodes(tree->right);
        
//         return ans;
//     }
    
//     bool isCBT(struct Node* tree, int size, int i){
        
//         if(tree== NULL){
//             return true;
//         }
        
//         else if(i >= size){
//             return false;
//         }
        
//         else{
//             bool l = isCBT(tree->left, size, 2*i +1);
//             bool r = isCBT(tree->right, size, 2*i +2);
            
//             return l && r;
//         }
//     }
    
//     bool isMaxOrder(struct Node* tree){
        
//         if(tree->left == NULL && tree->right == NULL){
//             return true;
//         }
        
//         else if( tree->right == NULL){
            
//             bool l = isMaxOrder(tree->left);
//             return (l && tree->data > tree->left->data );
            
//         }
        
//         else{
//             bool l = isMaxOrder(tree->left);
//             bool r = isMaxOrder(tree->right);
            
//             return (l && r && tree->data > tree->left->data && tree->data > tree->right->data);
//         }
//     }
    
//     bool isHeap(struct Node* tree) {
        
//         int size = countNodes(tree);
        
//         if( isCBT(tree, size, 0) && isMaxOrder(tree) ){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };