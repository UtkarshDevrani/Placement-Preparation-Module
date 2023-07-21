class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        TreeNode* curr=root;
       
       while(1)
       {
            if(curr!=NULL)
            {
               st.push(curr);   
               curr=curr->left;
             }
             else
             {
                 if(st.empty())break;
                 TreeNode* node=st.top();
                 st.pop();
                 v.push_back(node->val);
                 curr=node->right;
             } 
       }
       return v;

    
    }
};