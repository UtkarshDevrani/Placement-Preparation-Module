class Solution {
public:
    bool solve(int curr,vector<vector<int>>&adj,vector<int>&vis,int val)
    {
        vis[curr]=val;
        for(auto it:adj[curr])
        {
            if(vis[it]!=-1)
            {
               if(vis[it]==vis[curr])return false;
            }
            else
            {
                if(solve(it,adj,vis,!val)==false)return false;
            }
        }
            return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,-1);
        int val=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(solve(i,graph,vis,0)==false)return false;
            }  
        }
        return true;
    }
};