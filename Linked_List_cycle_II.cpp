Node *firstNode(Node *head)
{
	//    Write your code here.
    if(head==NULL || head->next==NULL)return NULL;
    Node *s=head, *f=head, *entry=head;
    while(f->next && f->next->next){
        s=s->next;
        f=f->next->next;
        if(s==f){
            while(s!=entry){
               s= s->next;
                entry=entry->next;
            }
            return entry;
        }
    }
    return NULL;
}