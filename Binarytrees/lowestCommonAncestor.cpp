// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

// class Solution
// {
//     public:
//     //Function to return the lowest common ancestor in a Binary Tree.
//     Node* lca(Node* root ,int n1 ,int n2 )
//     {
//        //Your code here 
//        if(root==NULL){
//            return NULL;
//        }
//        if(root->data==n1 || root->data==n2){
//            return root;
//        }
       
//        Node* leftPart = lca(root->left, n1, n2);
//        Node* rightPart = lca(root->right, n1, n2);
       
//        if(leftPart!=NULL && rightPart!=NULL){
//            return root;
          
//        }
//        if(leftPart!=NULL && rightPart==NULL){
//            return leftPart;
          
//        }
//        if(leftPart==NULL && rightPart!=NULL){
//            return rightPart;
          
//        }
//     }
// };