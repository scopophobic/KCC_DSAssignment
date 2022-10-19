int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* temp=llist;
    int count=0;
    
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    int po=count-positionFromTail-1;
    int i=0;
    while(po>i){
        llist=llist->next;
        i++;
    }
    return llist->data;
    
}
