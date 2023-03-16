//https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1


// Node * removeDuplicates( Node *head) 
//     {
    
    
    
//     if(head==NULL){
//         return NULL;
//     }
        
    
//     map<int, bool> value;        //map to store if a value is encountered or not
//     Node* curr = head->next;
//     Node* prev = head;
    
//     value[head->data]=true;          //mark first element value as true
    
    
//     while( curr!=NULL){
        
//         if(value[curr->data]==true){         // if duplicate found delete it
           
//             prev->next = curr->next;
//             delete(curr);
            
            
//         }
//         else{
//             value[curr->data]=true;          //otherwise mark as true
//             prev = curr;
//         }
//         curr = prev->next;
//     }
    
//     return head;

//     }