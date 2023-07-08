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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)return true;
        ListNode*slow=head,*fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow=head;
        ListNode*prev=NULL,*curr;
        while(fast)
        {
            curr=fast->next;
            fast->next=prev;
            prev=fast;
            fast=curr;
        }
        fast=prev;
        while(fast)
        {
            if(slow->val!=fast->val)return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};