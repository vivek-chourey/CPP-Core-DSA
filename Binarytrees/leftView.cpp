// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

// vector<int> leftView(Node *root)
// {
   
        
//         vector<int> result;
//     	if(root==NULL){
//     	    return result;
//     	}
    	
//     	queue <Node*> q;
//     	q.push(root);
    	
    	
    	
//     	while(!q.empty()){
    	    
//     	    int size = q.size();
    	    
    	    
    	    
    	    
//     	    for(int i =0; i<size; i++){
    	        
//         	    Node* frontElement = q.front();        
//         	    q.pop();
        	    
    	        
//     	        if(i==0){
//     	            result.push_back(frontElement->data);        // basically we need first element of each level
//     	        }
    	        
    	        
//     	        if(frontElement->left){
//     	            q.push(frontElement->left);
//     	        }
//     	        if(frontElement->right){
//     	            q.push(frontElement->right);
//     	        }
//     	    }
    	    
    	    
    	    
    	    
//     	}
//     	return result;
       
// }