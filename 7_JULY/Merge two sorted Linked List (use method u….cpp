class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newnode=new ListNode();
        ListNode*temp=newnode;
        while(list1 && list2)
        {
            if(list1->val<=list2->val)newnode->next=list1,list1=list1->next;
            else newnode->next=list2,list2=list2->next;
            newnode=newnode->next;
        }
        if(list1)newnode->next=list1;
        if(list2)newnode->next=list2;
        return temp->next;
        
    }
};