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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
        ListNode * slow=head,*fast=head,*temp;
        int count=0;
        while(slow)
        {
            count++;
            slow=slow->next;
        }
        k=k%count;
        if(k==0)return head;
        while(k--)
        { 
            fast=fast->next;
        }
        slow=head;
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        temp=slow->next;
        slow->next=NULL;
        fast->next=head;
        return temp;
        
    }
};