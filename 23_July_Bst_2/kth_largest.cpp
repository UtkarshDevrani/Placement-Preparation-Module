class Solution
{
    public:
      void inorder(Node* root,int &k,int &ans)
     {
         if(root==NULL)return;
         inorder(root->right,k,ans);
         k--;
         if(k==0)
         {
             ans=root->data;
             return;
         }
         inorder(root->left,k,ans);
     }
    int kthLargest(Node *root, int k)
    {
        int ans;
        inorder(root,k,ans);
        return ans;
    }
};