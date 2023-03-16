// https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

// class Solution
// {
// public:

//     void solve(Node *root, int sum, int &maxSum, int lg, int &maxLg){
        
//         if(root==NULL){
            
//             if(lg>maxLg){
//                 maxLg = lg;
//                 maxSum = sum;
//             }
//             if(lg==maxLg){
//                 maxSum = max(maxSum, sum);
//             }
//             return;
//         }
        
//         sum = sum + root->data;
        
//         solve(root->left, sum, maxSum, lg+1, maxLg);
//         solve(root->right, sum, maxSum, lg+1, maxLg);
//     }
    
//     int sumOfLongRootToLeafPath(Node *root)
//     {
//         int sum = 0;
//         int maxSum = INT_MIN;
        
//         int lg = 0;
//         int maxLg = 0;
        
//         solve(root, sum, maxSum, lg, maxLg);
        
//         return maxSum;
//     }
// };