class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
                int n=grid.size();
        int m=grid[0].size();
        int vis[n][m];
       queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
                else vis[i][j]=0;
            }
        }
        int t=0;
        int tr[]={0,0,1,-1};
        int cr[]={-1,1,0,0};
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int sec=q.front().second;
            q.pop();
            t=max(t,sec);
            for(int i=0;i<4;i++)
            {
                int r=row+tr[i];
                int c=col+cr[i];
                if(r>=0 && r<n && c>=0 && c<m && vis[r][c]==0 && grid[r][c]==1)
                {
                    q.push({{r,c},sec+1});
                    vis[r][c]=2;
                }
            }
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]!=2 && grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return t;
        
    }
};