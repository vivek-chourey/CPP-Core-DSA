// https://www.codingninjas.com/codestudio/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=0

// void inordTrav (TreeNode<int>* root,vector<int> &inord){
    
//     if(root==NULL){
//         return;
//     }
//     inordTrav(root->left, inord);
//     inord.push_back(root->data);
//     inordTrav(root->right, inord);
// }
// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     vector<int> inord;          //as inorder is sorted
//     inordTrav(root, inord);
//     int n = inord.size();
    
//     TreeNode<int>* listHead = new TreeNode<int>(inord[0]);
//     TreeNode<int>* curr = listHead;
    
//     for(int i =1; i<n;i++){
//         TreeNode<int>* temp = new TreeNode<int>(inord[i]);      //creation and connecting nodes
//         curr->left = NULL;
//         curr->right = temp;
//         curr = temp;
        
//     }
//     curr->left = NULL;      //last node of linked list
//     curr->right = NULL;
    
//     return listHead;
    
    
    
// }