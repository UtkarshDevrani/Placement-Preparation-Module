class Solution {
public:
         void porder(TreeNode* root,vector<int>&v)
{
     if(root==NULL)
    {
        return;
    }
    porder(root->left,v);
    porder(root->right,v);
    v.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
           vector<int>v;
           porder(root,v);
           return v;
    
    }
};