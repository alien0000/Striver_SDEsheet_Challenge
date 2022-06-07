LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    
       if(head==NULL){
            return head;
        }
        LinkedListNode<int>* dummy=NULL;
        
        while(head!=NULL){
            LinkedListNode<int>* next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;        }
        return dummy;
    // Write your code here
}