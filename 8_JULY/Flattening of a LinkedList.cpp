

/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    Node* merge(Node* m1,Node*m2)
    {
        Node*dummy=new Node(0);
        Node*temp=dummy;
        while(m1!=NULL && m2!=NULL)
        {
            if(m1->data<=m2->data)
            {
                temp->bottom=m1;
                m1=m1->bottom;
            }
            else
            {
                temp->bottom=m2;
                m2=m2->bottom;
            }
            temp=temp->bottom;
        }
        if(m1)
          temp->bottom=m1;
        else
           temp->bottom=m2;
        return dummy->bottom;
    }
Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL)
    {
        return root;
    }
    root->next=flatten(root->next);
    root=merge(root,root->next);
    return root;
   // Your code here
}