// https://practice.geeksforgeeks.org/problems/k-sum-paths/1

// class Solution{
//   public:
    
//     void solve(Node* root, int k, vector<int> path, int &count){
        
//         if(root==NULL){
//             return ;
//         }
        
//         path.push_back(root->data);
        
//         solve(root->left, k, path, count);
//         solve(root->right, k, path, count);
        
//         int size = path.size();
//         int sum=0;
//         for(int i = size-1; i>=0; i--){
//             sum += path[i];
//             if(sum==k){
//                 count++;
//             }
//         } 
            // no need to pop as path is passed by reference
//     }
    
//     int sumK(Node *root,int k)
//     {
//         vector<int> path;
//         int count=0;
//         solve(root, k, path, count);
//         return count;
//     }
// };