class Solution {
public:
bool issame(TreeNode*p,TreeNode*q)
{
    if(p==NULL || q==NULL)return(p==q);
    return((p->val==q->val) && issame(p->left,q->right) && issame(p->right,q->left));

}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return 1;
        else return issame(root->left,root->right);
        
    }
};