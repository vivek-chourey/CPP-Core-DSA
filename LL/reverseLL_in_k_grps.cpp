//https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=1

/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


// Node* kReverse(Node* head, int k) {
    
//     if(head==NULL){              // base case
//         return NULL;
//     }
    
//     Node* prev =NULL;
//     Node* curr =head;
//     Node* next =NULL;
//     int count = 0;
    
//     while(curr!=NULL && count<k){        //reversing list of first k elements
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         count++;
        
//     }
    
//     if(next!=NULL){
//         head->next = kReverse(next,k);       //connecting head element to recursively obtained, remaining reversed list
//     }
//     return prev;
// }