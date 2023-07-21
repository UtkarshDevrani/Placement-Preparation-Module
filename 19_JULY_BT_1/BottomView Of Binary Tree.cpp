//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
         vector<int>v;
        if(root==NULL)return v;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            Node* curr=it.first;
            int line=it.second;
            mp[line]=curr->data;
            
            if(curr->left!=NULL)q.push({curr->left,line-1});
            if(curr->right!=NULL)q.push({curr->right,line+1});
        }
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        return v;
    }
};