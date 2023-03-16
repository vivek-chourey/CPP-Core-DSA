// https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

// vector<int> diagonal(Node *root)
// {
//    vector <int> result;
   
//    if(root==NULL){
//        return result;
//    }
   
//    queue <Node*> q;
//    q.push(root);
   
//    while(!q.empty()){
       
//        int size = q.size();
       
//        for(int i =size; i>0; i--){
           
//            Node* front = q.front();
//            q.pop();
           
//            while(front){
               
//                result.push_back(front->data);
               
//                if(front->left){
//                    q.push(front->left);
//                }
               
//                front = front->right;
//            }
           
//        }
//    }
//    return result;
   
// }