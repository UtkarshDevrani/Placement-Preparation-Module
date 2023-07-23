#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int>*root,int x,int &ans)
{
    if(root==NULL)return;
    else if(root->val>x)solve(root->left,x,ans);
    else if(root->val==x)
    {
        ans=x;
        return;
    }
    else
    {
       ans=max(ans,root->val);
       solve(root->right,x,ans);
    }

}
int floorInBST(TreeNode<int> * root, int X)
{
        int ans=-1;
    if(root==NULL)return ans;
    TreeNode<int> *node=root;
    solve(node,X,ans);
    return ans;
    // Write your code here.
}