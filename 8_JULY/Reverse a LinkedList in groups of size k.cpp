/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *curr=head,*next=NULL,*prev=NULL;
        int count=0;
        if(head==NULL)
        {
            return NULL;
        }
        while(count<k && curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(count<k && curr==NULL)
        {
            curr=prev;
            prev=NULL;
            next=NULL;
            while(curr!=NULL)
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            return prev;
        }
        if(next!=NULL)
        {
            head->next=reverseKGroup(next,k);
        }
        return prev;
        
    }
};