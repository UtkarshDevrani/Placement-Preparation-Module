/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* formpost(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,map<int,int>&mp)
 {
     if(instart>inend || prestart>preend)return NULL;
     TreeNode* root=new TreeNode(preorder[prestart]);

     int inelem=mp[root->val];
     int nelem=inelem-instart;

     root->left= formpost(preorder,prestart+1,prestart+nelem,inorder,instart,inelem-1,mp);
     root->right=formpost(preorder,prestart+nelem+1,preend,inorder,inelem+1,inend,mp);
     return root;


 }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       int instart=0,inend=inorder.size()-1,prestart=0,preend=preorder.size()-1;
       map<int,int>mp;
       for(int i=0;i<inorder.size();i++)
       {
           mp[inorder[i]]=i;
       }
       return formpost(preorder,prestart,preend,inorder,instart,inend,mp);  
    }
};