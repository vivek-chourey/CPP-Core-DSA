//https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan

//  Node *findMiddle(Node *head) {      \\by the time fast reaches null slow will be pointing to the middle On   O1
    
//     Node* fast = head->next;
//     Node* slow = head;
    
//     if(head->next==NULL)
//         return head;
    
//     while(fast!= NULL){
//         fast = fast->next;
//         if(fast!=NULL)
//             fast = fast->next;
//         slow = slow->next;
//     }
//     return slow;
    
    
// }