/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * iter=head,*fw;
        while(iter!=NULL)
        {
            Node*copy=new Node(iter->val);
            fw=iter->next;
            iter->next=copy;
            copy->next=fw;
            iter=fw;
        }
        iter=head;
        while(iter!=NULL)
        {
            if(iter->random!=NULL)
            {
                iter->next->random=iter->random->next;
            }
             iter=iter->next->next;
        }
        iter=head;
        Node* dummy=new Node(0);
        Node* temp=dummy;
        while(iter!=NULL)
        {
            fw=iter->next->next;
            temp->next=iter->next;
            iter->next=fw;
            temp=temp->next;
            iter=fw;
        }
        return dummy->next;
        
    }
};