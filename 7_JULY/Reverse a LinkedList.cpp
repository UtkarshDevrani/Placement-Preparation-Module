class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp,*prev=NULL;
        if(head==NULL)return head;
        while(head!=NULL)
        {
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        return prev;
        
    }
};