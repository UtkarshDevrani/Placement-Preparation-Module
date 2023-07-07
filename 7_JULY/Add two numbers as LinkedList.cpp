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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1,*temp2=l2,*ll;
        int carry=0,sum=0;
        while(temp1!=NULL && temp2!=NULL)
        {
            sum=temp1->val+temp2->val+carry;
            temp1->val=sum%10;
            carry=sum/10;
            ll=temp1;
            temp1=temp1->next;
            temp2=temp2->next; 
        }
        while(temp1!=NULL)
        {
            sum=temp1->val+carry;
            temp1->val=sum%10;
            carry=sum/10;
            ll=temp1;
            temp1=temp1->next;    
        }
        ll->next=temp2;
        while(temp2!=NULL)
        {
            sum=temp2->val+carry;
            temp2->val=sum%10;
            carry=sum/10;
            ll=temp2;
            temp2=temp2->next;  
        }
        if(carry!=0)
        {
            ListNode*dummy=new ListNode(carry);
            ll->next=dummy;
        }
        
        return l1;
    }
};