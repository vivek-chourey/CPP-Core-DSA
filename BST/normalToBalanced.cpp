// https://www.codingninjas.com/codestudio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=0

// void inordTrav (TreeNode<int>* root,vector<int> &inord){
    
//     if(root==NULL){
//         return;
//     }
//     inordTrav(root->left, inord);
//     inord.push_back(root->data);
//     inordTrav(root->right, inord);
// }
// TreeNode<int>* balancedBst(int s,int e, vector<int> &inord){
//     if(s>e){
//         return NULL;
//     }
//     int mid = (s+e)/2;
//     TreeNode<int>* root = new TreeNode<int>(inord[mid]);
//     root->left = balancedBst(s, mid-1, inord);
//     root->right = balancedBst(mid+1, e, inord);
//     return root;
// }
// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//     vector<int> inord;          
//     inordTrav(root, inord);
//     return balancedBst(0,inord.size()-1,inord);
// }
