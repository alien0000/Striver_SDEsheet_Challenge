Node *addTwoNumbers(Node *head1, Node *head2)
{
    
     int carry = 0, first, second;
        Node *head = new Node(0), *tail = head;
        while (head1 || head2 || carry) {
            if (head1) {
                first = head1->data;
                head1 = head1->next;
            }
            else
                first = 0;
            
            if (head2) {
                second = head2->data;
                head2 = head2->next;
            }
            else
                second = 0;
            
            int temp = first+second+carry;
            tail->next = new Node(temp%10);
            tail = tail->next;
            carry = temp/10;
            
        }
        return head->next;
    // Write your code here.
}