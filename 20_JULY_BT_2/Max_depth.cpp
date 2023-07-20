class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int lh=maxDepth(root->left);//lrft height
        int rh=maxDepth(root->right);//right height
        return 1+max(lh,rh);      
    }
};