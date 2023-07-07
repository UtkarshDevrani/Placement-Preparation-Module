class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy=new ListNode();
        dummy->next=head;
        ListNode *start=dummy,*fast=dummy;
        while(n>0)
        {
            fast=fast->next;
            n--;
        }
        while(fast->next!=NULL)
        {
            start=start->next;
            fast=fast->next;
        }
        start->next=start->next->next;
        
        return dummy->next;
    }
};