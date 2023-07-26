class Solution {
public:
    int findCircleNum(vector<vector<int>>& grid) {
        int n =grid.size(),count=0;
        vector<int>adj[n],vis(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && grid[i][j]==1)adj[i].push_back(j);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                count++;
                queue<int>q;
                q.push(i);
                while(!q.empty())
                {
                    int ind=q.front();
                    vis[ind]=1;
                    q.pop();
                    for(auto it:adj[ind])
                    {
                        if(vis[it]==0)q.push(it);
                    }
                }
            }
        }
        return count;
    }
};