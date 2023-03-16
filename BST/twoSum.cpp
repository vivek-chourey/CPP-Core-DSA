// https://www.codingninjas.com/codestudio/problems/two-sum-in-a-bst_1062631?leftPanelTab=0

// void inordTrav (BinaryTreeNode<int>* root,vector<int> &inord){
    
//     if(root==NULL){
//         return;
//     }
//     inordTrav(root->left, inord);
//     inord.push_back(root->data);
//     inordTrav(root->right, inord);
// }
// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
// 	vector <int> inord;
//     inordTrav(root, inord);
//     int n = inord.size();
//     int i =0;
//     int j =n-1;
    
//     while(i<j && i<n-1 && j>0){
//         if(inord[i] + inord[j] == target){
//             return true;
//         }
//         else if(inord[i] + inord[j] > target){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
    
//     return false;
// }