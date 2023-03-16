// https://practice.geeksforgeeks.org/problems/sorted-list-to-bst/1

// class Solution{
//   public:
  
//     int getSize(LNode *head){
        
//         int count = 0;
//         LNode* temp = head;
        
//         while(temp!=NULL){
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
    
//     TNode* solve(LNode * &head, int n ) {            //this algo makes BST from leaf nodes towards root
        
//         if(head==NULL || n<=0){              //base cond
//             return NULL;
            
//         }
        
//         TNode* left = solve(head, n/2 );         //make left subtree and stores its root in left
        
//         TNode* root = new TNode(head->data);     //make current node (current root)
//         root->left = left;                       //connect root with left subtree
        
//         head = head->next;                   //advance head to next element in ll as we are going from leaf to root
        
//         root->right = solve(head, n-(n/2)-1 );       connect root with right subtree
        
//         return root;
        
//     }
    
//     TNode* sortedListToBST(LNode *head) {
        
//         int size = getSize(head);
        
//         return solve(head, size );
        
//     }
// };