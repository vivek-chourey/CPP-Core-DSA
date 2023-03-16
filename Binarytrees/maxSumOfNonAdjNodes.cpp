// https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1

// class Solution{
//   public:
  
//   pair <int, int> solve(Node* root){     //first of pair is max sum including root, second is maxsum excluding root
      
//       if(root==NULL){
//           pair<int, int> p = make_pair(0, 0);
//           return p;
//       }
      
//       pair <int, int> leftPart = solve(root->left);
//       pair <int, int> rightPart = solve(root->right);
      
      
//       pair <int, int> result;
      
//       result.first = leftPart.second + root->data + rightPart.second;
//       result.second = max(leftPart.second, leftPart.first) + max(rightPart.second, rightPart.first);
      
//       return result;
//   }
    
//     //Function to return the maximum sum of non-adjacent nodes.
//     int getMaxSum(Node *root) 
//     {
//         pair <int, int> ans = solve(root);
        
//         return max(ans.first, ans.second);
//     }
// };