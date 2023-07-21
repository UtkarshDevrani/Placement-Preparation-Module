/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
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
            if(mp.find(line)==mp.end())mp[line]=curr->data;
            
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
