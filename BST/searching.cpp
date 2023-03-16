// https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878?leftPanelTab=1

// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     if(root==NULL){
//         return false;
//     }
//     if(root->data==x){
//         return true;
//     }
//     if(root->data > x){
//        return searchInBST(root->left, x);
//     }
//     else{
//        return searchInBST(root->right, x);
//     }
    
//     return false;
// }