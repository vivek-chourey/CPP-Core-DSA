//https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view 
//     //from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         map< int, int> mp;
        
//         queue < pair<Node* ,int>> q;
//         vector<int> ans;
        
//         if(root==NULL){
//             return ans;
//         }
        
//         q.push(make_pair(root, 0));
        
//         while(!q.empty()){
            
//             pair<Node* ,int> curr = q.front();
//             q.pop();
            
//             Node* frontNode = curr.first;
//             int hd = curr.second;
            
//             if(mp.find(hd)==mp.end()){
//                 mp[hd] = frontNode->data;
//             }
            
            
//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left, hd-1));
//             }
            
//             if(frontNode->right){
//                 q.push(make_pair(frontNode->right, hd+1));
//             }
            
//         }
        
//         for(auto i : mp){
            
//             ans.push_back(i.second);
//         }
        
//         // for(std::map<int,int>::iterator it = mp.begin(); it != mp.end(); ++it) {
            
//         //     ans.push_back(it->second);
           
//         // }
//         return ans;
//     }

// };