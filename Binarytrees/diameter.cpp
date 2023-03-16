//https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

 //diameter is the longest possible path in a tree, if we use height fn for finding height then its tc will add up and overall will be On2 so instead we calculate height at each step and store in pair

// On  Oheight solution

// pair<int,int> diameterFast(Node* root) {                


//         //base case

//         if(root == NULL) {
//             pair<int,int> p = make_pair(0,0);        //if root null, dia=0, height=0. first-> dia, second-> height.
//             return p;
//         }
        
//         pair<int,int> left = diameterFast(root->left);
//         pair<int,int> right = diameterFast(root->right);
        
//         int op1 = left.first;                    // diameter lies in left subtree
//         int op2 = right.first;                   // diameter lies in right subtree
//         int op3 = left.second + right.second + 1;  // diameter includes root node( then right subtree ht + right sbt ht +1).
        
//         pair<int,int> ans;
//         ans.first = max(op1, max(op2, op3));         // ans is max of above 3 options
//         ans.second = max(left.second , right.second) + 1;       // update height

//         return ans;
//     }
//     int diameter(Node* root) {
    
//         return diameterFast(root).first;
        
//     }