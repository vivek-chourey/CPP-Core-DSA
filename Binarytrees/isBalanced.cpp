//https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

//On   Oheight

// class Solution{
//     public:
//     //Function to check whether a binary tree is balanced or not.
//     pair <bool, int> fastBalance(Node *root){
//         if(root==NULL){
//             pair <bool, int> p = make_pair(true, 0);
//             return p;
//         }
        
//         pair <bool, int> left = fastBalance(root->left);
//         pair <bool, int> right = fastBalance(root->right);
        
//         bool cond = abs(left.second - right.second) <=1;
        
//         pair <bool, int> ans;
        
//         ans.second = max(left.second, right.second) +1;
        
//         if(left.first && right.first && cond){
//             ans.first = true;
//         }
//         else{
//             ans.first = false;
//         }
//         return ans;
//     }
    
//     bool isBalanced(Node *root)
//     {
//         return fastBalance(root).first;
        
//     }
// };
