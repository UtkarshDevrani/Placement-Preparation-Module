class Solution {
public:
 bool isBalanced(TreeNode* root) {
     return dfsheight(root)!=-1;
 }
    int dfsheight(TreeNode* root) {
        if(root==NULL)return 0;

        int lh=(dfsheight(root->left));
        int rh=(dfsheight(root->right));
        
        if(lh==-1 || rh==-1)return -1;

        if(abs(lh-rh)>1)return -1;
        return 1+max(lh,rh);   
    }
};