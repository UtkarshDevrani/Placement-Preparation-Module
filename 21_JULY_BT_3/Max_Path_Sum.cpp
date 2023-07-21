class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxsum(root,ans);
        return ans;
    }
    int maxsum(TreeNode*root,int &ans)
    {
        if(root==NULL)return 0;
        int lmax=max(0,maxsum(root->left,ans));
        int rmax=max(0,maxsum(root->right,ans));
        ans=max(ans,lmax+rmax+root->val);

        return max(lmax,rmax)+root->val; 
    }
};