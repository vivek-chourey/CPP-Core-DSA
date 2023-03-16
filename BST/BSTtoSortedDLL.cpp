// explanation similar to YT- https://www.youtube.com/watch?v=8-ErlqTsFN0&ab_channel=CodingSimplified

// https://www.codingninjas.com/codestudio/problems/bst-to-sorted-dll_1263694

// void solve(TreeNode<int> *root, TreeNode<int>*&head){
    
    // if(root==NULL){
    //     return;
    // }
//     solve(root->right, head);
    
//     root->right = head;     //doubly connecting root to right part
//     if(head!=NULL){         
//         head->left = root;     //doubly connecting root to right part
//     }
//     head = root;            //updating head
    
//     solve(root->left, head);
   
// }
// TreeNode<int>* bstToSortedDLL(TreeNode<int> *root)
// {
//     TreeNode<int>* head = NULL;
// 	solve(root, head);
//     return head;
// }
