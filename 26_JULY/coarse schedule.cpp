class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) 
    {
          vector<int>deg(n,0);
        vector<int>vis(n,0);
        vector<int>adj[n];
        vector<int>v;
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
            deg[pre[i][1]]+=1;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(deg[i]==0)
            { 
              q.push(i);
              vis[i]=1;
            }
        }
        while(!q.empty())
        {
            int node=q.front();
            v.push_back(node);
            q.pop();
            for(auto it:adj[node])
            {
                if(vis[it]==0 && deg[it]==1)
                {
                    vis[it]=1;
                    q.push(it);
                }
                else deg[it]-=1;
            }
        }
        if(v.size()==n)return true;
        return false;
        
    }
};