class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(root==NULL)return res;
        q.push(root);
        q.push(NULL);
        int counter=0;
        while(q.size()>=2){
            vector<int>v;
            while(q.front()!=NULL)
            {
                if(q.front()->left!=NULL)q.push(q.front()->left);
                if(q.front()->right!=NULL)q.push(q.front()->right);
                v.push_back(q.front()->val);
                q.pop();
            }
            q.push(NULL);
            q.pop();
            if(counter==0){
                counter++;
                res.push_back(v);
            }
            else{
                counter--;
                reverse(v.begin(),v.end());
                res.push_back(v);
               }
    }
    return res;

        
    }
};