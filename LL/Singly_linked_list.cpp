#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next= NULL;
    }


};

void insert_at_head(Node* &head,int d){

    Node* new_node = new Node(d);
    new_node->next = head;
    head = new_node;

}

void insert_at_tail(Node* &tail, int d){

    Node* new_node = new Node(d);
    tail->next = new_node;
    tail = new_node;


}

void insert_at_position(Node* &head, Node* &tail, int d, int pos){

    if(pos==1){         //insert at head
        insert_at_head(head,d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count< pos-1){            //getting pointer to node just before pos as temp
        temp = temp->next;
        count++;

    }

    if(temp->next == NULL){          //if next of temp is null then it will be last node so insert at tail
        insert_at_tail(tail,d);
    }

    Node* new_node = new Node(d);

    new_node->next = temp->next;

    temp->next = new_node;


}

void delete_node(int pos, Node* &head){
    if(pos==1){             //deleting first node
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;

    }
    else{               //deleting last or any other node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count< pos){      
            prev = curr;
            curr = curr->next;
            count++;
        }


        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    

    }

}

void print_list(Node* head){
    if(head==NULL) {
        cout<<"empty list"<<endl;
        return;
    }

    while(head!=NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node* n1 = new Node(3);
    Node* head = n1;
    Node* tail = n1;

    print_list(head);

    insert_at_head(head,5);
    insert_at_head(head,6);

    insert_at_tail(tail,9);
    insert_at_tail(tail,4);

    print_list(head);

    insert_at_position(head,tail,12,5);

    print_list(head);

    insert_at_position(head,tail,1,1);

    print_list(head);

    insert_at_position(head,tail,100,7);

    print_list(head);

    
    return 0;
}