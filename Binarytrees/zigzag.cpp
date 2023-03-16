  // https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

// vector <int> zigZagTraversal(Node* root)
//     {
//      vector<int> result;   //for final answer
//     	if(root==NULL){
//     	    return result;
//     	}
    	
//     	queue <Node*> q;  
//     	q.push(root);
    	
//     	bool is_leftToRight = true;
    	
//     	while(!q.empty()){                //if a tree has 3 levels it will run 3 times
    	    
//     	    int size = q.size();          //size of level
//     	    vector <int> ans(size);       //for storing ans of a level
    	    
    	    
//     	    for(int i =0; i<size; i++){           //if a level has 3 elements it will run 3 times
    	        
//         	    Node* frontElement = q.front();     //pick front element
//         	    q.pop();
        	    
//     	        int index = is_leftToRight ? i : size-i-1;      //is_leftToRight will be same for a level, changes after level is finished(all iterations of for loop is finished)
    	        
//     	        ans[index] = frontElement->data;      //place that elements based on 'is_lefttoright' in ans vector
    	        
//     	        if(frontElement->left){               //push child elements in queqe for next iteration of while loop(next level)
//     	            q.push(frontElement->left);
//     	        }
//     	        if(frontElement->right){
//     	            q.push(frontElement->right);
//     	        }
//     	    }
    	    
//     	    is_leftToRight = !is_leftToRight;       //invert is_leftToRight to prepare for next level
    	    
//     	    for(auto i :ans){                 //finally end of level....store ans for this level in result vector
//     	        result.push_back(i);
//     	    }
//     	}                   //go to next level if queqe is not empty otherwise return result vector
//     	return result;
    	
    	
//     }