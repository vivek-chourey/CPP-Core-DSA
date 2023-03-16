// https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTab=1



// Node* merge(Node* left, Node* right) {
    
//     if(left==NULL){
//         return right;
//     }
//     else if(right==NULL){
//         return left;
//     }
//     Node* ans = NULL;
    
//         if(left->data < right->data){
//             ans = left;
//             ans->child = merge(left->child,right);
//         }
//         else{
//             ans = right;
//             ans->child = merge(left,right->child);
//         }
//         ans ->next =NULL;
//     return ans;
// }

// Node* flattenLinkedList(Node* head) 
// {
// 	if(head==NULL  || head->next==NULL){
//         return head;
//     }
//     Node* down = head;
    
//     Node* flattened= flattenLinkedList( head->next);
//     down->next = NULL;
//     head = merge(down, flattened);
    
//     return head;
    
// }
