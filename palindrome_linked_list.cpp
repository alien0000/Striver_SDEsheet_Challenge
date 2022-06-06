LinkedListNode<int> * reverse(LinkedListNode<int> *head){
    LinkedListNode<int> * curr=head;
    LinkedListNode<int> * prev=NULL;
    
    while(curr!=NULL){
        LinkedListNode<int> * n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
        
    }
    
    return prev;
}

   bool isPalindrome(LinkedListNode<int> *head) {
        if(head==NULL || head->next==NULL)return true;
       LinkedListNode<int> * s=head;
        LinkedListNode<int> * f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        s->next=reverse(s->next);
        s=s->next;
        while(s!=NULL){
            if(head->data!=s->data){
                return false;
            }
            head=head->next;
            s=s->next;
        }
        return true;
    }