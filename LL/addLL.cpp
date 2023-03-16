//https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

// class Solution
// {   private:
//     struct Node* reverse(struct Node* head){
//         Node*curr = head;
//         Node*prev = NULL;
//         Node*next = NULL;
        
//         while(curr!=NULL){
//             next = curr->next;
//             curr->next =prev;
//             prev = curr;
//             curr = next;
            
//         }
//         return prev;
//     }
    
//     void insertAns(struct Node* &head, struct Node* &tail, int &val){
        
//         Node* temp = new Node(val);
        
//         if(head==NULL && tail==NULL){
//             head = temp;
//             tail = temp;
            
//         }
//         else{
//             tail->next = temp;
//             tail= temp;
            
//         }
        
        
        
        
//     }
    
    
//     struct Node* add(struct Node* first, struct Node* second){
        
//         Node* ansHead = NULL;
//         Node* ansTail = NULL;
        
//         int carry =0;
        
//         while(first!=NULL || second!=NULL || carry!=0){
            
//             int val1 = 0;
//             if(first!=NULL){
//                 val1 = first->data;
//             }
            
//             int val2 = 0;
//             if(second!=NULL){
//                 val2 = second->data;
//             }
            
//             int sum = carry + val1 + val2;
            
//             int digit = sum % 10;
            
//             insertAns(ansHead, ansTail, digit);
            
//             carry = sum / 10;
            
//             if(first!=NULL){
                
//                 first = first->next;
                
//             }
            
//             if(second!=NULL){
                
//                 second = second->next;
//             }
                
            
            
//         }
//         return ansHead;
//     }
    
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         first = reverse(first);
//         second = reverse(second);
        
//         Node* ans = add(first,second);
        
//         ans = reverse(ans);
        
//         return ans;
//     }
// };