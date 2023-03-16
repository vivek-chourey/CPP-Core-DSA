// https://www.codingninjas.com/codestudio/problems/mergesort-linked-list_630514?leftPanelTab=1

// node* middle(node* head){
//     node* fast = head->next;
//     node* slow = head;
    
//     while(fast!=NULL && fast->next!=NULL){
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     return slow;
// }

// node* merge(node *left, node *right) {
    
//     if(left==NULL){
//         return right;
//     }
//     if(right==NULL){
//         return left;
//     }
    
//     node* ans = new node(-1);
    
//     node* temp = ans;
    
//     while(left!=NULL && right!=NULL){
//         if(left->data < right->data){
//             temp->next = left;
//             temp = left;
//             left = left->next;
//         }
//         else{
//              temp->next = right;
//             temp = right;
//             right = right->next;
//         }
//     }
//     while(left!=NULL){
//             temp->next = left;
//             temp = left;
//             left = left->next;
//     }
//     while(right!=NULL){
//             temp->next = right;
//             temp = right;
//             right = right->next;
//     }
    
//     ans = ans->next;
//     return ans;
// }

// node* mergeSort(node *head) {
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
    
//     node* mid = middle(head);
//     node* left = head;
//     node* right = mid->next;
//     mid->next = NULL;
    
//     left = mergeSort(left);
//     right = mergeSort(right);
    
//     node* ans = merge(left, right);
    
//     return ans;
// }
