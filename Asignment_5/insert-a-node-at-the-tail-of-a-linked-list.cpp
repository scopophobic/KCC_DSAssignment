

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
   
    SinglyLinkedListNode *temp1= new SinglyLinkedListNode(data);
    
    if(head == NULL){
        return temp1;
    }
    
    SinglyLinkedListNode* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=temp1;
    return head;
}
