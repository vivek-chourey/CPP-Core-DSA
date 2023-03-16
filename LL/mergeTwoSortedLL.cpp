//https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_800332?leftPanelTab=0

//best (recursion) O(f+s) O(f+s)

// Node* merge(Node* first, Node* second ) 
// {
// 	if(first==NULL)
// 		return second;
// 	if(second==NULL)
// 		return first;


// 	Node* ans = NULL;

// 	if(first->data < second->data){
// 		ans =first;
// 		ans->child = merge(first->child, second);
// 	}else{
// 		ans =second;
// 		ans->child = merge(second->child, first);
// 	}
	
// 	return ans;

// }








// Node<int>* solve(Node<int>* first, Node<int>* second){
    
//     if(first->next==NULL){
//         first->next = second;
//         return first;
//     }
    
//     Node<int>* temp = second;
//     Node<int>* prev = first;
//     Node<int>* curr = first->next;
// //     Node<int>* track = temp->next;
    
//     while(temp!=NULL && curr!=NULL){
//         if(temp->data >= prev->data && temp->data <= curr->data){
//             Node<int>* track = temp->next;
//             Node<int>* ins = temp;
//             prev->next = ins;
//             ins->next = curr;
//             prev= prev->next;
//             temp=track;
//         }
//         else{
//             prev=curr;
//             curr=prev->next;
//             if(curr==NULL){
//                 prev->next = temp;
//                 return first;
//             }
//         }
        
//     }
//     return first;
// }


// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     // Write your code here.
//     if(first==NULL){
//         return second;
//     }
    
//     if(second==NULL){
//         return first;
//     }
    
//     if(first->data <= second->data){
//         solve(first,second);
//     }
//     else{
//         solve(second,first);
//     }
    
   
// }
// ----------------------------------------------------------------------------------------------------



//  easier sol 




// ----------------------------------------------------------------------------------------------------

// node* merge(node* left, node* right) {
    
//     if(left == NULL)
//         return right;
    
//     if(right == NULL)
//         return left;
    
//     node* ans = new node(-1);
//     node* temp = ans;
    
//     //merge 2 sorted Linked List
//     while(left != NULL && right != NULL) {
//         if(left -> data < right -> data ) {
//             temp -> next = left;
//             temp = left;
//             left = left -> next;
//         }
//         else
//         {
//             temp -> next = right;
//             temp = right;
//             right = right -> next;
//         }
//     }
    
//     while(left != NULL) {
//         temp -> next = left;
//         temp = left;
//         left = left -> next;
//     }
    
//     while(right != NULL) {
//         temp -> next = right;
//         temp = right;
//         right = right -> next;
//     }
    
//     ans = ans -> next;
//     return ans;
    
// }