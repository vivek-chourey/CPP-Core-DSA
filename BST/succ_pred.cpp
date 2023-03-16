// https://www.codingninjas.com/codestudio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

// #include <bits/stdc++.h> 
// /*************************************************************

//     Following is the Binary Tree node structure

//     template <typename T>

//     class BinaryTreeNode
//     {
//     public :
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~BinaryTreeNode() {
//             if (left)
//             {
//                 delete left;
//             }
//             if (right)
//             {
//                 delete right;
//             }
//         }
//     };

// *************************************************************/

// pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
// {
//     BinaryTreeNode<int>* temp = root;
//     int pred = -1;
//     int succ = -1;
//     while(temp->data!=key){
        
//         if(temp->data > key){
//             succ = temp->data;
//             temp = temp->left;
//         }
//         else{
//             pred = temp->data;
//             temp = temp->right;
//         }
        
//     }
//     BinaryTreeNode<int>* leftSt = temp->left;
//     while(leftSt!=NULL){
//         pred = leftSt->data;
//         leftSt = leftSt->right;
//     }
    
//     BinaryTreeNode<int>* rightSt = temp->right;
//     while(rightSt!=NULL){
//         succ = rightSt->data;
//         rightSt = rightSt->left;
//     }
//     return {pred,succ};
// }
