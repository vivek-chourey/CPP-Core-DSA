// https://practice.geeksforgeeks.org/problems/sum-tree/1

// class Solution
// {   private:
//     pair<bool, int> fastSum(Node* root){
        
//         if(root==NULL){
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
        
//         if(root->left==NULL && root->right==NULL){
//             pair<bool, int> p = make_pair(true, root->data);
//             return p;
//         }
        
//         pair<bool, int> left = fastSum(root->left);
//         pair<bool, int> right = fastSum(root->right);
        
//         bool cond = (left.second + right.second) == root->data;
        
//         pair<bool, int> ans;
        
        
//         if(left.first && right.first && cond){
//             ans.first = true;
//             ans.second = 2*(root->data);
//         }
//         else{
//             ans.first = false;
//         }
        
//         return ans;
//     }
//     public:
//     bool isSumTree(Node* root)
//     {
//          return fastSum(root).first;
         
//     }
// };