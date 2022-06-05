LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
      LinkedListNode<int>* dummy;
        if(head==NULL ||K==0){
            return head;
        }
       LinkedListNode<int>* f=head;
        LinkedListNode<int>* s=head;
        for(int i=0;i<K;i++){
            f=f->next;
        }
    if(f==NULL)                   
    {
        return head->next;
    }
        while(f->next !=NULL){
           
            f=f->next;
             s=s->next;
        }
        s->next=s->next->next;
        return head;
    // Write your code here.
}