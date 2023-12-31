

/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    pre=NULL;
    suc=NULL;
    Node*curr=root;
    while(root!=NULL)
    {
        if(key>=root->key)root=root->right;
        else
        {
            suc=root;
            root=root->left;
        }
    }
    while(curr!=NULL)
    {
        if(key<=curr->key)curr=curr->left;
        else
        {
            pre=curr;
            curr=curr->right;
        }
    }

// Your code goes here

}